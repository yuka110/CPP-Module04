/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   WrongCat.cpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: yitoh <yitoh@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/05/02 16:15:26 by yitoh         #+#    #+#                 */
/*   Updated: 2024/05/02 16:15:29 by yitoh         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat(){
    setType("WrongCat");
    std::cout << "WrongCat is constructed" << std::endl;
}

WrongCat::~WrongCat(){
    std::cout << "WrongCat is destructed" << std::endl;
}

void WrongCat::makeSound() const{
    std::cout << "Meawwwww..." << std::endl;
}