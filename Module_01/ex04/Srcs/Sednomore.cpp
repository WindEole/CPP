/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sednomore.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iderighe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/06 16:46:55 by iderighe          #+#    #+#             */
/*   Updated: 2022/06/06 16:46:58 by iderighe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sednomore.hpp"

Sednomore::Sednomore(std::string filename, std::string oldstr, std::string newstr)
					: _fileName(filename), _oldStr(oldstr), _newStr(newstr)
{
	std::cout << "Constructor called" << std::endl;
	this->_newFileName = this->_fileName;
	this->_newFileName += ".replace";
	return;
}

Sednomore::~Sednomore()
{
	std::cout << "Destructor called" << std::endl;
	return;
}

void	Sednomore::replaceStr(void)
{
	std::string		content;
	size_t			pos = -1;

	this->_ifs.open(this->_fileName.c_str());
	if (!_ifs)
	{
		std::cerr << "Error opening file" << std::endl;
		return;
	}
	content.assign(std::istreambuf_iterator<char>(this->_ifs), std::istreambuf_iterator<char>());
	this->_ifs.close();
	while (++pos < content.length())
	{
		if (!content.compare(pos, this->_oldStr.length(), this->_oldStr))
		{
			content.erase(pos, this->_oldStr.length());
			content.insert(pos, this->_newStr);
			pos = pos - 1 + this->_newStr.length();
		}
	}
	this->_ofs.open(this->_newFileName.c_str());
	if (!_ofs)
	{
		std::cerr << "Error while creating file" << std::endl;
		this->_ifs.close();
		return;
	}
	this->_ofs << content;
	this->_ofs.close();
}
