/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matorgue <warthog2603@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/17 21:36:01 by matorgue          #+#    #+#             */
/*   Updated: 2024/05/24 18:05:04 by matorgue         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(int argc, char **argv)
{
    std::string no = "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
    std::string argvv;

    if (argc > 1)
    {
        for(int i = 1; i < argc; i++)
        {
            argvv = argv[i];
            int len = argvv.length();
            for(int k = 0; k < len;k++)
            {
                std::cout << (char)(toupper(argvv[k]));
                // std::cout << (toupper(argvv[k]));
            }
            std::cout << " ";
        }
        std::cout << std::endl;
    }
    else
        std::cout << no << std::endl;
    return 0;
}