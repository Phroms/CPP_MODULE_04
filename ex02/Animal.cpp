/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agrimald <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/03 18:53:06 by agrimald          #+#    #+#             */
/*   Updated: 2024/09/03 18:53:07 by agrimald         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Animal.hpp"

Animal::Animal()
    : _type("Animal")
{
    std::cout << "Animal Called Constructor" << std::endl;
}

Animal::Animal(std::string type)
    : _type(type)
{
    std::cout << "Animal Called Constructor type" << std::endl;
}

Animal::Animal(const Animal &cpy)
{
    this->_type = cpy._type;
    std::cout << "Animal Called Constructor copy" << std::endl;
}

Animal &Animal::operator=(const Animal &rhs)
{
    std::cout << "Animal Called Constructor Operator" << std::endl;
    if (this != &rhs)
    {
        this->_type = rhs._type;
    }
    return *this;
}

std::string Animal::getType()const
{
    return this->_type;
}

void Animal::makeSound()const
{
    std::cout << "Animal Make Sound" << std::endl;
}

Animal::~Animal()
{
    std::cout << "Animal Called Destructor" << std::endl;
}