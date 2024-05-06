/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Brain.cpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: yitoh <yitoh@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/05/02 17:19:52 by yitoh         #+#    #+#                 */
/*   Updated: 2024/05/06 17:03:21 by yitoh         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
    std::cout << "Brain is constructed" << std::endl;
}

Brain::~Brain()
{
    std::cout << "Brain is destructed" << std::endl;
}

void Brain::set_ideas(std::string s)
{
    _ideas[0] = s;
    std::cout << BLUE << "My idea is: " << _ideas[0] << RESET << std::endl;
}

std::string* Brain::get_ideas()
{
    return (_ideas);
}