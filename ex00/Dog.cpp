/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Dog.cpp                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: yitoh <yitoh@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/04/29 16:11:49 by yitoh         #+#    #+#                 */
/*   Updated: 2024/05/02 16:00:40 by yitoh         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(){
    setType("Dog");
    std::cout << "Dog is constructed" << std::endl;
}

Dog::~Dog(){
    std::cout << "Dog is destructed" << std::endl;
}

void Dog::makeSound() const{
    std::cout << "Woof Woof!" << std::endl;
}