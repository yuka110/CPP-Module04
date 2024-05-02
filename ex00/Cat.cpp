/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Cat.cpp                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: yitoh <yitoh@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/04/29 16:11:43 by yitoh         #+#    #+#                 */
/*   Updated: 2024/05/02 16:00:27 by yitoh         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(){
    setType("Cat");
    std::cout << "Cat is constructed" << std::endl;
}

Cat::~Cat(){
    std::cout << "Cat is destructed" << std::endl;
}

void Cat::makeSound() const{
    std::cout << "Meawwwww..." << std::endl;
}