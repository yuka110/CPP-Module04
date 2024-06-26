/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Animal.hpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: yitoh <yitoh@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/04/29 16:06:58 by yitoh         #+#    #+#                 */
/*   Updated: 2024/05/06 17:03:47 by yitoh         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

#include <iostream>
#include <string>

class Animal
{
protected:
    std::string _type;

public:
    Animal();
    virtual ~Animal();
    std::string getType() const;
    void setType(std::string type);
    virtual void makeSound() const;
};

#endif
