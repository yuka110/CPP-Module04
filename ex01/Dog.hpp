/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Dog.hpp                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: yitoh <yitoh@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/04/29 16:11:47 by yitoh         #+#    #+#                 */
/*   Updated: 2024/05/06 16:42:45 by yitoh         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

#include <iostream>
#include <string>
#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal
{
private:
    Brain* _brain;

public:
    Dog();
    Dog(std::string idea);
    Dog(Dog& copy);
    ~Dog();
    void operator=(Dog& copy);
    virtual void makeSound() const;
    Brain* getBrain();
};

#endif