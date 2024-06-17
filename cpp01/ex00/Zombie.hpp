/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matorgue <warthog2603@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/27 12:32:25 by matorgue          #+#    #+#             */
/*   Updated: 2024/05/27 17:03:19 by matorgue         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <iomanip>

class Zombie {
private:
    std::string name;
public:
    Zombie(std::string name);

    ~Zombie();
    
    void    announce(void);
    
    Zombie *newZombie( std::string name);
    
    void randomChump(std:: string name);
};