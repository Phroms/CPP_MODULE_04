/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agrimald <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/27 17:41:32 by agrimald          #+#    #+#             */
/*   Updated: 2024/08/27 17:41:33 by agrimald         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal()
    : _type("Animal")
{
    std::cout << "Called Constructor Animal" << std::endl;
}

Animal::Animal(const std::string type)
    : _type(type)
{
    std::cout << "Called Constructor Animal 2" << std::endl;
}

Animal::Animal(const Animal& cpy)
{
    std::cout << "Called Constructor Animal copy" << std::endl;
    this->_type = cpy._type;
}

Animal &Animal::operator=(const Animal &rhs)
{
    std::cout << "Called Constructor Animal Operator" << std::endl;
    if (this != &rhs)
        this->_type = rhs._type;
    return *this;
}

void Animal::makeSound()const
{
    std::cout << "Make sound" << std::endl;
}

std::string Animal::getType() const
{
    return this->_type;
}

Animal::~Animal()
{
    std::cout << "Called Destructor Animal" << std::endl;
}