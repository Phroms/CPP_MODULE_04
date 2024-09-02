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
    std::cout << "\033[33mCalled Constructor Animal\033[0m" << std::endl;
}

Animal::Animal(const std::string type)
    : _type(type)
{
    std::cout << "\033[33mCalled Constructor Type\033[0m" << std::endl;
}

Animal::Animal(const Animal& cpy)
{
    std::cout << "\033[33mCalled Constructor Animal copy\033[0m" << std::endl;
    this->_type = cpy._type;
}

Animal &Animal::operator=(const Animal &rhs)
{
    std::cout << "\033[33mCalled Constructor Animal Operator\033[0m" << std::endl;
    if (this != &rhs)
        this->_type = rhs._type;
    return *this;
}

void Animal::makeSound()const
{
    std::cout << "\033[35mMake sound\033[0m" << std::endl;
}

std::string Animal::getType() const
{
    return this->_type;
}

Animal::~Animal()
{
    std::cout << "\033[33mCalled Destructor Animal\033[0m" << std::endl;
}