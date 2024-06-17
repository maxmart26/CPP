/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matorgue <warthog2603@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/29 10:02:24 by matorgue          #+#    #+#             */
/*   Updated: 2024/05/29 11:08:28 by matorgue         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"
int main(void)
{
    Harl harl;

    std::cout << "\ntest pour DEBUG :\n" << std::endl;
    harl.complain("DEBUG");
     std::cout << "\ntest pour INFO :\n" << std::endl;
    harl.complain("INFO");
     std::cout << "\ntest pour WARNING :\n" << std::endl;
    harl.complain("WARNING");
     std::cout << "\ntest pour ERROR :\n" << std::endl;
    harl.complain("ERROR"); 
}