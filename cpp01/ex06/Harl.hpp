/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matorgue <warthog2603@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/29 10:15:57 by matorgue          #+#    #+#             */
/*   Updated: 2024/05/29 11:27:03 by matorgue         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_CPP

# define HARL_CPP

#include <iostream>
#include <map>
#include <functional>

class Harl
{
private:
    void    debug(void)
    {
        std::cout << "\nDEBUG : I love having extra bacon for my \
7XL-double-cheese-triple-pickle-specialketchup burger. I really do !" << std::endl;
    };
    void    info(void)
    {
        std::cout << "\nINFO : I cannot believe adding extra bacon costs more money. You didn t put \
enough bacon in my burger ! If you did, I wouldn t be asking for more !" << std::endl;
    };
    void    warning(void)
    {
        std::cout << "\nWARNIMG : I think I deserve to have some extra bacon for free. I’ve been coming;\
for years whereas you started working here since last month." << std::endl;
    };
    void    error(void)
    {
        std::cout << "\nERROR : This is unacceptable ! I want to speak to the manager now" << std::endl;
    };
public:
    Harl();
    ~Harl();
    void    complain(std::string level);
};

#endif