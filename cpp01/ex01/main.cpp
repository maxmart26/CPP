/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matorgue <warthog2603@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/27 17:03:40 by matorgue          #+#    #+#             */
/*   Updated: 2024/05/27 17:40:29 by matorgue         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde(int N, std::string name);

int main()
{
    Zombie* zom = zombieHorde(10, "zombie");
    for(int i = 0; i < 10; i++)
    {
        zom[i].announce();
    }
    delete[] zom;
}