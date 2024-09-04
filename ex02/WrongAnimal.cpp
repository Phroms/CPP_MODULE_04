/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agrimald <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/04 16:31:36 by agrimald          #+#    #+#             */
/*   Updated: 2024/09/04 16:31:37 by agrimald         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
    this->_wrong_type = "Wrong Animal";
    std::cout << "WrongAnimal Called Constructor" << std::endl;
}

WrongAnimal::WrongAnimal(std::string type)
{
    this->_wrong_type = type;
    std::cout << "WrongAnimal Called Constructor type" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &cpy)
{
    this->_wrong_type = cpy._wrong_type;
    std::cout << "WrongAnimal Called Constructor cpy" << std::endl;
}

WrongAnimal &WrongAnimal::operator=(const WrongAnimal &rhs)
{
    std::cout << "WrongAnimal Called Constructor operator" << std::endl;
    if (this != &rhs)
    {
        this->_wrong_type = rhs._wrong_type;
    }
    return *this;
}

std::string WrongAnimal::setType()const
{
    return this->_wrong_type;
}

void WrongAnimal::makeSound()const
{
    std::cout << "Bad Sound of animal" << std::endl;
}

WrongAnimal::~WrongAnimal()
{
    std::cout << "WrongAnimal Called Destructor" << std::endl;
}