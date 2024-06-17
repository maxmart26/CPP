/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matorgue <warthog2603@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/31 11:38:50 by matorgue          #+#    #+#             */
/*   Updated: 2024/05/31 12:00:18 by matorgue         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

class Fixed
{
private:
    int value;
    static const int value_BITS = 8;
public:
    Fixed();
    Fixed(const Fixed& copy);
    ~Fixed();

    Fixed &operator=(const Fixed &src);

    int getRawBits(void)const;

    void setRawBits(int const raw);
};

