/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matorgue <warthog2603@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/31 11:38:50 by matorgue          #+#    #+#             */
/*   Updated: 2024/06/17 12:53:21 by matorgue         ###   ########.fr       */
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
    
    bool operator>(const Fixed fix);
    bool operator<(const Fixed fix);
    bool operator>=(const Fixed fix);
    bool operator<=(const Fixed fix);
    bool operator==(const Fixed fix);
    bool operator!=(const Fixed fix);

    Fixed operator+(const Fixed fix);
    Fixed operator-(const Fixed fix);
    Fixed operator*(const Fixed fix);
    Fixed operator/(const Fixed fix);
    Fixed &operator++();
    Fixed operator++(int);
    Fixed &operator--();
    Fixed operator--(int);

    Fixed min(Fixed &fix, Fixed &fix2);
    const Fixed min(const Fixed &fix, const Fixed &fix2);
    static Fixed &max(Fixed &fix, Fixed &fix2);
    static const Fixed &max(const Fixed &fix, const Fixed &fix2);
    int getRawBits(void)const;

    void setRawBits(int const raw);
    
    float toFloat(void)const;
	
    int toInt(void)const;
};

std::ostream    &operator<<(std::ostream &o, Fixed const &fixed);
