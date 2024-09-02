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
    std::cout << "\033[34mCalled Constructor of Wrong Animal\033[0m" << std::endl;
}

WrongAnimal::WrongAnimal(const std::string type)
{
    this->_type = type;
    std::cout << "\033[34mCalled Constructor of Wrong Animal 2\033[0m" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal& cpy)
{
    this->_type = cpy._type;
    std::cout << "\033[34mCalled Constructor Wrong Animal copy\033[0m" << std::endl;
}

WrongAnimal &WrongAnimal::operator=(const WrongAnimal &rhs)
{
    if (this != &rhs)
        this->_type = rhs._type;
    std::cout << "\033[34mCalled Constructor Wrong Animal operator\033[0m" << std::endl;
    return *this;
}

std::string WrongAnimal::getType()const
{
    return this->_type;
}

void WrongAnimal::makeSound()const
{
    std::cout << "\033[30mBad Sound of animal\033[0m" << std::endl;
}

WrongAnimal::~WrongAnimal()
{
    std::cout << "\033[31mCalled Destructor Wrong Animal\033[0m" << std::endl;
}