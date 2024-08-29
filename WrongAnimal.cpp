/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agrimald <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/28 17:40:29 by agrimald          #+#    #+#             */
/*   Updated: 2024/08/28 17:40:30 by agrimald         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
    this->_type = "Wrong Animal";
    std::cout << "Called Constructor of Wrong Animal" << std::endl;
}

WrongAnimal::WrongAnimal(const std::string type)
{
    this->_type = type;
    std::cout << "Called Constructor of Wrong Animal 2" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal& cpy)
{
    this->_type = cpy._type;
    std::cout << "Called Constructor Wrong Animal copy" << std::endl;
}

WrongAnimal &WrongAnimal::operator=(const WrongAnimal &rhs)
{
    if (this != &rhs)
        this->_type = rhs._type;
    std::cout << "Called Constructor Wrong Animal operator" << std::endl;
    return *this;
}

std::string WrongAnimal::getType()const
{
    return this->_type;
}

void WrongAnimal::makeSound()const
{
    std::cout << "Bad Sound of animal" << std::endl;
}

WrongAnimal::~WrongAnimal()
{
    std::cout << "Called Destructor Wron Animal" << std::endl;
}