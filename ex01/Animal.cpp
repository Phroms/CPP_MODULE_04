/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agrimald <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/02 18:27:49 by agrimald          #+#    #+#             */
/*   Updated: 2024/09/02 18:27:51 by agrimald         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Animal.hpp"

Animal::Animal()
    : _type("Animal")
{
    std::cout << "Calle constructor Animal" << std::endl;
}

Animal::Animal(std::string type)
    : _type(type)
{
    std::cout << "Called Constructor Type Animal" << std::endl;
}

Animal::Animal(const Animal& cpy)
{
    this->_type = cpy._type;
}

Animal  &Animal::operator=(const Animal &rhs)
{
    if (this != &rhs)
    {
        this->_type = rhs._type;
    }
    return (*this);
}

void Animal::makeSound() const
{
    std::cout << "Make Sound" << std::endl;
}

std::string Animal::getType() const
{
    return this->_type;
}

Animal::~Animal()
{
    std::cout << "Called Destructor Animal" << std::endl;
}