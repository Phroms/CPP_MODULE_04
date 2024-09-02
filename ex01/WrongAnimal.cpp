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
    std::cout << "\033[96mCalled Constructor of Wrong Animal\033[0m" << std::endl;
}

WrongAnimal::WrongAnimal(std::string type)
{
    this->_type = type;
    std::cout << "Called Constructor type of Wrong Animal" << std::cout;
}

WrongAnimal::WrongAnimal(const WrongAnimal& cpy)
{
    this->_type = cpy._type;
    std::cout << "Called Constructor copy of Wrong Animal" << std::cout;
}

WrongAnimal &WrongAnimal::operator=(const WrongAnimal &rhs)
{
    if (this != &rhs)
        this->_type = rhs._type;
    std::cout << "Called Constructor operator of Wrong Animal" << std::endl;
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
    std::cout << "Called Destructor Wrong Animal" << std::endl;
}