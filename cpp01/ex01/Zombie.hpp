/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matorgue <warthog2603@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/27 16:47:51 by matorgue          #+#    #+#             */
/*   Updated: 2024/05/27 17:55:47 by matorgue         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <iomanip>

class Zombie
{
private:
    std::string name;
public:

    Zombie() : name("Default") {}
    Zombie(std::string);
    
    ~Zombie();

    void announce();

    void setname(const std::string& name) {
        this->name = name;
    }
};
