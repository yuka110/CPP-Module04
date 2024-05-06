/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: yitoh <yitoh@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/04/29 16:13:18 by yitoh         #+#    #+#                 */
/*   Updated: 2024/05/06 17:23:27 by yitoh         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "WrongAnimal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"

int main()
{
    std::cout << "-------------PART 1----------------" << std::endl;
    
    Animal *animals[6];
    for (int i = 0; i < 6; i++)
    {
        std::cout << i + 1 << ": ";
        if (i % 2)
            animals[i] = new Dog();
        else
            animals[i] = new Cat();
        std::cout << std::endl;
    }
    for (int i = 0; i < 6; i++)
    {
        std::cout << i + 1 << ": ";
        delete animals[i];
        std::cout << std::endl;
    }

    std::cout << std::endl << "-------------PART 2----------------" << std::endl;

    std::string idea = "Eureka!";
    std::string idea2 = "My brain is fried";
    
    
    Dog* dog = new Dog(idea);
    std::cout << std::endl;
    Dog copy(*dog);
    std::cout << std::endl;
    dog->getBrain()->set_ideas(idea2);
    std::cout << YELLOW << "Copy Dog idea is still: " << copy.getBrain()->get_ideas()[0] << RESET << std::endl << std::endl;
    
    // Cat* cat = new Cat(idea2);
    // std::cout << std::endl;
    // Cat kitty(*cat);
    // std::cout << std::endl;
    // cat->getBrain()->set_ideas(idea);
    // std::cout << YELLOW << "Copy Cat idea is still: " << kitty.getBrain()->get_ideas()[0] << RESET << std::endl << std::endl;
    
    delete dog;
    std::cout << std::endl;
    // delete cat;
    // std::cout << std::endl;
    return 0;
}
