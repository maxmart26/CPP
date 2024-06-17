/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matorgue <warthog2603@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/29 07:09:51 by matorgue          #+#    #+#             */
/*   Updated: 2024/05/31 17:17:43 by matorgue         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <fstream>
#include <cstdio>
#include <cstdlib>

std::string   replace(std::string line,const std::string oldWord,const std::string newWord)
{
   size_t	erase_length = oldWord.length();
	size_t	replace_length = newWord.length();
	size_t	pos_search = 0;

	pos_search = line.find(oldWord);
	while (pos_search != std::string::npos)
	{
		line.erase(pos_search, erase_length);
		line.insert(pos_search, newWord);
		pos_search = line.find(oldWord, pos_search + replace_length);
	}
	return (line);
}
int main(int argc, char **argv)
{
    if (argc != 4)
    {
        std::cerr << "PROBLEME AVEC LES ARGUMENTS" << std::endl;
        return (1);
    }
    std::string oldword = argv[2];
    std::string newWord = argv[3];
    std::ifstream inputFile(argv[1]);
    if (!inputFile)
    {
        std::cerr << "PROBLEME AVEC L OUVERTURE DU FICHIER" << std::endl;
        return (1);
    }
    std::string outputfile = argv[1];
    std::string file = outputfile + ".replace";
    std::ofstream outFile(file.c_str());
    if (!outFile)
    {
        std::cerr << "PROBLEME AVEC L OUVERTURE DU FICHIER REPlACE" << std::endl;
        inputFile.close();
        return (1);
    }
    std::string line;
    while(std::getline(inputFile,line))
    {
        line  = replace(line, oldword, newWord);
        outFile << line << std::endl;
    }
    outFile.close();
    inputFile.close();
    
}