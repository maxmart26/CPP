/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matorgue <warthog2603@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/31 11:38:50 by matorgue          #+#    #+#             */
/*   Updated: 2024/05/31 19:07:31 by matorgue         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cmath>


class Fixed
{
private:
    int value;
    static const int value_BITS = 8;
public:
    Fixed();
    Fixed(const int input);
	Fixed(const float input);
    Fixed(const Fixed& copy);
    ~Fixed();

    Fixed &operator=(const Fixed &src);

    int getRawBits(void)const;

    void setRawBits(int const raw);
    
    float toFloat(void)const;
	
    int toInt(void)const;
};

std::ostream    &operator<<(std::ostream &o, Fixed const &fixed);
