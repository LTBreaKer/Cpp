/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Replace.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aharrass <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/18 17:32:14 by aharrass          #+#    #+#             */
/*   Updated: 2023/07/30 16:49:02 by aharrass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./Replace.hpp"

Replace::Replace(std::string file_name, std::string s1, std::string s2):
	_FileName(file_name), _s1(s1), _s2(s2){
	_NewFileName = _FileName + ".replace";
}

Replace::~Replace(void){
}

void	Replace::readFile(void){
	std::ifstream	file;
	
	file.open(_FileName);
	if (file.fail() == 1){
		std::cout << "Error: can't open file \"" << _FileName + "\"" << std::endl;
		exit(1);
	}
	std::getline(file, _FileContent, '\0');
	file.close();
}

bool	Replace::search(size_t i) const{
	size_t	j = 0;

	if (i >= _FileContent.length())
		return (false);
	while (j < _s1.length() && i < _FileContent.length()){
		if (_FileContent[i] != _s1[j]
			|| (i == _FileContent.length() - 1 && j != _s1.length() - 1))
			return (false);
			i++;
			j++;
	}
	return (true);
}

void	Replace::replaceContent(void){
	size_t	i = 0;

	while (i < _FileContent.length()){
		if (search(i) && _s1.length()){
			_NewFileContent.append(_s2);
			i += _s1.length();
		}
		else{
			_NewFileContent.append(_FileContent, i, 1);
			i++;
		}
	}
}

void	Replace::writeNewFile(void) const{
	std::ofstream NewFile(_NewFileName);

	NewFile << _NewFileContent;
	NewFile.close();
}