/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Brain.hpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: yitoh <yitoh@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/05/02 17:19:54 by yitoh         #+#    #+#                 */
/*   Updated: 2024/05/06 17:47:20 by yitoh         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

#include <iostream>
#include <string>
#include "A_Animal.hpp"

class Brain
{
private:
    std::string _ideas[100];
public:
    Brain();
    Brain(Brain &copy);
    ~Brain();
    void set_ideas(std::string s);
    std::string* get_ideas();
};

#endif