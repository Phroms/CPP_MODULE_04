/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agrimald <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/04 16:25:33 by agrimald          #+#    #+#             */
/*   Updated: 2024/09/04 16:25:34 by agrimald         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Cat.hpp"

Cat::Cat() : Animal("Cat")
{
    std::cout << "Cat Called Constructor" << std::endl;
    this->_brain = new Brain();
}

Cat::Cat(const Cat &cpy) : Animal(cpy)
{
    *this = cpy;
    std::cout << "Cat Called Constructor cpy" << std::endl;
}

Cat &Cat::operator=(const Cat &rhs)
{
    std::cout << "Cat Called Constructor operator" << std::endl;
    if (this != &rhs)
    {
        this->_type = rhs._type;
        delete this->_brain;
        this->_brain = new Brain(*rhs._brain);
    }
    return *this;
}

void Cat::makeSound()const
{
    std::cout << "Miaw!!!" << std::endl;
}

Cat::~Cat()
{
    std::cout << "Cat Called Destructor" << std::endl;
    delete this->_brain;
}