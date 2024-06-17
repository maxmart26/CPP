/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matorgue <warthog2603@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/31 11:47:31 by matorgue          #+#    #+#             */
/*   Updated: 2024/05/31 12:03:59 by matorgue         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(): value(0)
{
    std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const Fixed& copy)
{
    std::cout << "Copy constructor called" << std::endl;
    *this = copy;
}
Fixed::~Fixed()
{
    std::cout << "Destructeur Fixed" << std::endl;
}
Fixed &Fixed::operator=(const Fixed &src)
{
    std::cout << "Copy assignment operator called" << std::endl;
    if (this != &src)
        this->value = src.getRawBits();
    return *this;
}

int Fixed::getRawBits(void)const
{
    std::cout << "getRawBits member function called" << std::endl;
    return (this->value);
}

void Fixed::setRawBits(int const raw)
{
    std::cout << "setRawBits member function called" << std::endl;
    this->value = raw;   
}