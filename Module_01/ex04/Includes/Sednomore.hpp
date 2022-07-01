/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sednomore.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iderighe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/06 16:47:42 by iderighe          #+#    #+#             */
/*   Updated: 2022/06/06 16:47:44 by iderighe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SEDNOMORE_HPP
# define SEDNOMORE_HPP

# include <iostream>
# include <fstream>

class Sednomore
{
	public:
		Sednomore(std::string filename, std::string oldstr, std::string newstr);
		~Sednomore();

		void	replaceStr(void);

	private:
		std::string		_fileName;
		std::string		_oldStr;
		std::string		_newStr;
		std::string		_newFileName;
		std::ifstream	_ifs;
		std::ofstream	_ofs;
};

#endif
