/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agrimald <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/02 19:16:21 by agrimald          #+#    #+#             */
/*   Updated: 2024/09/02 19:16:22 by agrimald         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
    this->_type = "Wrong Animal";
    std::cout << "Wrong Animal Called Constructor" << std::endl;
}

WrongAnimal::WrongAnimal(std::string type)
{
    this->_type = type;
    std::cout << "Wrong Animal Called Constructor type" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal& cpy)
{
    this->_type = cpy._type;
    std::cout << "Wrong Animal Called Constructor copy" << std::endl;
}

WrongAnimal &WrongAnimal::operator=(const WrongAnimal &rhs)
{
    if (this != &rhs)
    {
        this->_type = rhs._type;
    }
    std::cout << "Wrong Animal Called Constructor operator" << std::endl;
    return *this;
}

void WrongAnimal::makeSound() const
{
    std::cout << "Wrong Sound" << std::endl;
}

std::string WrongAnimal::getType() const
{
    return this->_type;
}

WrongAnimal::~WrongAnimal()
{
    std::cout << "Wrong Animal Called Destructor" << std::endl;
}