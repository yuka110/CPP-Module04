/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   WrongAnimal.cpp                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: yitoh <yitoh@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/05/02 16:12:55 by yitoh         #+#    #+#                 */
/*   Updated: 2024/05/06 17:35:49 by yitoh         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
    _type = "WrongAnimal";
    std::cout << "WrongAnimal is constructed" << std::endl;
}

WrongAnimal::~WrongAnimal()
{
    std::cout << _type << " is destructed" << std::endl;
}

void WrongAnimal::setType(std::string type)
{
    _type = type;
}

std::string WrongAnimal::getType() const
{
    return (_type);
}

void WrongAnimal::makeSound() const
{
    std::cout << "My existence is WRONG" << std::endl;
}
