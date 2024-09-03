/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agrimald <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/02 18:27:36 by agrimald          #+#    #+#             */
/*   Updated: 2024/09/02 18:27:38 by agrimald         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Animal.hpp"
# include "Dog.hpp"
# include "Cat.hpp"
# include "WrongAnimal.hpp"
# include "WrongCat.hpp"
# include "Brain.hpp"

int main()
{
    const Animal* meta = new Animal();
    const Animal* j = new Dog();
    const Animal* i = new Cat();
    std::cout << j->getType() << " " << std::endl;
    std::cout << i->getType() << " " << std::endl;
    i->makeSound(); //will output the cat sound!
    j->makeSound();
    meta->makeSound();

    delete i;
    delete j;
    delete meta;

    const WrongAnimal *WrongAnimals[] =
    {
        new WrongAnimal(),
        new WrongCat(),
    };
    for (int i = 0; i < 2; i++)
    {
        WrongAnimals[i]->makeSound();
        delete WrongAnimals[i];
    }


    std::cout << "\n_____________________ EX02 TESTS _____________________\n" << std::endl;
    Animal*  testAnimals[] =
    {
        new Cat(),
        new Dog(),
        new Dog(),
        new Cat(),
    new Dog(),
    new Cat(),
    };

    for (int i = 0; i < 6; i++)
        testAnimals[i]->makeSound();
    for (int i = 0; i < 6; i++)
        delete testAnimals[i];

    std::cout << "\033[34m\n_____________________ DEEP COPY TEST _____________________\033[0m\n" << std::endl;

    /*std::cout << "Empezo" << std::endl;
     Cat a;
     Cat b;
     a = b;
     std::cout << a.getType() << std::endl;
    std::cout << "termino" << std::endl;*/

    Cat* cat = new Cat();
    Cat* cat2 = new Cat(*cat);

    delete cat2;
    delete cat;

    return 0;
}