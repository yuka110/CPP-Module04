/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Cat.cpp                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: yitoh <yitoh@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/04/29 16:11:43 by yitoh         #+#    #+#                 */
/*   Updated: 2024/05/06 17:35:30 by yitoh         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(){
    setType("Cat");
    std::cout << "Cat is constructed" << std::endl;
    _brain = new Brain();
}

Cat::~Cat(){
    delete _brain;
    std::cout << _type << " is destructed" << std::endl;
}

Cat::Cat(std::string idea){
    setType("Cat");
    std::cout << "Cat is constructed" << std::endl;
    _brain = new Brain();
    _brain->set_ideas(idea);
}

Cat::Cat(Cat& copy)
{
    std::cout << "COPY Cat is constructed" << std::endl;
    operator=(copy);
}

void Cat::operator=(Cat& copy)
{
    if (this == &copy)
        return;
    std::cout << YELLOW << "Copy assignment operator called" << std::endl;
    setType("Cat");
    _brain = new Brain();
    *_brain = *copy._brain;
    std::cout << "COPY brain idea is: " << _brain->get_ideas()[0] << RESET << std::endl; 
}


void Cat::makeSound() const{
    std::cout << "Meawwwww..." << std::endl;
}


Brain* Cat::getBrain()
{
    return (_brain);
}
