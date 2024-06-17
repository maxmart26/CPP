/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matorgue <warthog2603@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/27 18:08:21 by matorgue          #+#    #+#             */
/*   Updated: 2024/05/27 18:25:40 by matorgue         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(void)
{
    std::string str = "HI THIS IS BRAIN";
    std::string    *stringPTR = &str;
    std::string    &stringREF = str;

    std::cout << "\nadresse\n\n" << std::endl;

    std::cout << "adresse de str " << &str << std::endl;
    std::cout << "adresse de stringPTR " << stringPTR << std::endl;
    std::cout << "adresse de stringREF " << &stringREF << std::endl;

    std::cout << "\nvaleur\n\n" << std::endl;

    std::cout << "valeur de str " << str << std::endl;
    std::cout << "valeur de stringPTR " << *stringPTR << std::endl;
    std::cout << "valeur de stringREF " << stringREF << std::endl;
}