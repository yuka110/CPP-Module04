/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   A_Animal.cpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: yitoh <yitoh@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/04/29 16:06:45 by yitoh         #+#    #+#                 */
/*   Updated: 2024/05/06 17:46:46 by yitoh         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "A_Animal.hpp"

A_Animal::A_Animal()
{
    _type = "A_Animal";
    std::cout << "A_Animal is constructed" << std::endl;
}

A_Animal::~A_Animal()
{
    std::cout <<"A_Animal is destructed" << std::endl;
}

void A_Animal::setType(std::string type)
{
    _type = type;
}

std::string A_Animal::getType() const
{
    return (_type);
}

// void A_Animal::makeSound() const
// {
//     std::cout << "meh.. I don't make any sounds" << std::endl;
// }

