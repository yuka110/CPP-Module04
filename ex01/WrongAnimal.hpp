/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   WrongAnimal.hpp                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: yitoh <yitoh@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/05/02 16:11:28 by yitoh         #+#    #+#                 */
/*   Updated: 2024/05/02 16:12:39 by yitoh         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

#include <iostream>
#include <string>

class WrongAnimal
{
protected:
    std::string _type;

public:
    WrongAnimal();
    ~WrongAnimal();
    std::string getType() const;
    void setType(std::string type);
    void makeSound() const;
};

#endif
