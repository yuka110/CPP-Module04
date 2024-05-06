/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: yitoh <yitoh@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/04/29 16:13:18 by yitoh         #+#    #+#                 */
/*   Updated: 2024/05/06 17:32:52 by yitoh         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "WrongAnimal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"

int main()
{
    const Animal* meta = new Animal();
    const Animal* doggy = new Dog();
    const Animal* kitty = new Cat();
    
    const WrongAnimal* wrong = new WrongAnimal();
    const WrongAnimal* wrongcat = new WrongCat();
    const WrongCat* catcat = new WrongCat();
    
    std::cout << std::endl;
    std::cout << doggy->getType() << ": ";
    doggy->makeSound();//will output dog sound!

    std::cout << kitty->getType() << ": ";
    kitty->makeSound(); //will output the cat sound!

    std::cout << meta->getType() << ": ";
    meta->makeSound(); //will output animal sound!
    
    std::cout << std::endl;

    std::cout << wrong->getType() << ": ";
    wrong->makeSound(); //will output the wronganimal sound!

    std::cout << wrongcat->getType() << ": ";
    wrongcat->makeSound(); //will output wronganimal sound!
    
    std::cout << catcat->getType() << ": ";
    catcat->makeSound(); //will output wrongcat sound!
    
    std::cout << std::endl;
    delete meta;
    delete doggy;
    delete kitty;
    std::cout << std::endl;
    delete wrong;
    delete wrongcat;
    delete catcat;

    return 0;
}
