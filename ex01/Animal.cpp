/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Animal.cpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: yitoh <yitoh@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/04/29 16:06:45 by yitoh         #+#    #+#                 */
/*   Updated: 2024/05/06 17:36:57 by yitoh         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal()
{
    _type = "Animal";
    std::cout << "Animal is constructed" << std::endl;
}

Animal::~Animal()
{
    std::cout <<"Animal is destructed" << std::endl;
}

void Animal::setType(std::string type)
{
    _type = type;
}

std::string Animal::getType() const
{
    return (_type);
}

void Animal::makeSound() const
{
    std::cout << "meh.. I don't make any sounds" << std::endl;
}

