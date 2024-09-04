/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agrimald <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/04 16:15:38 by agrimald          #+#    #+#             */
/*   Updated: 2024/09/04 16:15:40 by agrimald         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Dog.hpp"

Dog::Dog() : Animal("Dog")
{
    std::cout << "Dog Called Constructor" << std::endl;
    this->_brain = new Brain();
}

Dog::Dog(const Dog &cpy) : Animal(cpy)
{
    *this = cpy;
    std::cout << "Dog Called Constructor cpy" << std::endl;
}

Dog &Dog::operator=(const Dog &rhs)
{
    std::cout << "Dog Called Constructor operator" << std::endl;
    if (this != &rhs)
    {
        this->_type = rhs._type;
        this->_brain = new Brain(*rhs._brain);
    }
    return *this;
}

void Dog::makeSound()const
{
    std::cout << "Wouf!!!" << std::endl;
}

Dog::~Dog()
{
    std::cout << "Dog Called Destructor" << std::endl;
    delete this->_brain;
}