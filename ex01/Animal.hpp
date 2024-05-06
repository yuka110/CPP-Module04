/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Animal.hpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: yitoh <yitoh@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/04/29 16:06:58 by yitoh         #+#    #+#                 */
/*   Updated: 2024/05/06 17:03:58 by yitoh         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

#include <iostream>
#include <string>

#define BOLD_TEXT "\033[1m"
#define RESET "\033[0m"
#define RED "\033[31m"
#define GREEN "\033[32m"
#define YELLOW "\033[33m"
#define BLUE "\033[34m"
#define MAGENTA "\033[35m"
#define CYAN "\033[36m"
#define WHITE "\033[37m"

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
