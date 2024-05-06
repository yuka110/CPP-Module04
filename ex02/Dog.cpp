/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Dog.cpp                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: yitoh <yitoh@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/04/29 16:11:49 by yitoh         #+#    #+#                 */
/*   Updated: 2024/05/06 17:35:42 by yitoh         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(){
    std::cout << "Dog is constructed" << std::endl;
    setType("Dog");
    _brain = new Brain();
}

Dog::Dog(std::string idea){
    setType("Dog");
    std::cout << "Dog is constructed" << std::endl;
    _brain = new Brain();
    _brain->set_ideas(idea);
}

Dog::Dog(Dog& copy)
{
    std::cout << "COPY Dog is constructed" << std::endl;
    operator=(copy);
}

Dog::~Dog(){
    delete _brain;
    std::cout << _type << " is destructed" << std::endl;
}

void Dog::operator=(Dog& copy)
{
    if (this == &copy)
        return;
    std::cout << YELLOW << "Copy assignment operator called" << std::endl;
    setType("Dog");
    _brain = new Brain();
    *_brain = *copy._brain;
    std::cout << "COPY brain idea is: " << _brain->get_ideas()[0] << RESET << std::endl; 
}


void Dog::makeSound() const{
    std::cout << "Woof Woof!" << std::endl;
}

Brain* Dog::getBrain()
{
    return (_brain);
}
