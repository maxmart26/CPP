/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matorgue <warthog2603@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/29 10:02:24 by matorgue          #+#    #+#             */
/*   Updated: 2024/05/29 11:25:11 by matorgue         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"
int main(int ac, char **av)
{
    if (ac != 2)
    {
        std::cerr << "PROBLEME AVEC LES ARGUMENT" << std::endl;
        return 1;
    }
    else
    {
        Harl harl;
        std::string level = av[1];
        harl.complain(level);
    }
    return (0);
}