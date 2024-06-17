/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matorgue <warthog2603@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/29 10:19:52 by matorgue          #+#    #+#             */
/*   Updated: 2024/05/29 11:26:09 by matorgue         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl()
{
}
Harl::~Harl()
{
}
enum ComplaintLevel {
    DEBUG,
    INFO,
    WARNING,
    ERROR,
    UNKNOWN
};

ComplaintLevel getComplaintLevel(const std::string& level) {
    if (level == "DEBUG") return DEBUG;
    if (level == "INFO") return INFO;
    if (level == "WARNING") return WARNING;
    if (level == "ERROR") return ERROR;
    return UNKNOWN;
}
void Harl::complain(std::string level)
{
    switch (getComplaintLevel(level)) {
        case DEBUG:
            debug();
            info();
            warning();
            error();
            break;
        case INFO:
            info();
            warning();
            error();
            break;
        case WARNING:
            warning();
            error();
            break;
        case ERROR:
            error();
            break;
        default:
            std::cerr << " Probably complaining about insignificant problems" << std::endl;
            break;
    }
}