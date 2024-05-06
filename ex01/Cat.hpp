/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Cat.hpp                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: yitoh <yitoh@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/04/29 16:09:19 by yitoh         #+#    #+#                 */
/*   Updated: 2024/05/06 17:20:43 by yitoh         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

#include <iostream>
#include <string>
#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal
{
private:
    Brain* _brain;

public:
    Cat();
    Cat(std::string idea);
    Cat(Cat& copy);
    ~Cat();
    void operator=(Cat& copy);
    virtual void makeSound() const;
    Brain* getBrain();
};

#endif