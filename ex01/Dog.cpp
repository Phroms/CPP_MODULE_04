/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agrimald <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/02 19:01:16 by agrimald          #+#    #+#             */
/*   Updated: 2024/09/02 19:01:17 by agrimald         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Dog.hpp"

Dog::Dog() : Animal("Dog")
{
    std::cout << "Called Constructor Dog" << std::endl;
}

Dog::Dog(const Dog& cpy) : Animal(cpy)
{
    this->_type = cpy._type;
}

Dog &Dog::operator=(const Dog &rhs)
{
    if (this != &rhs)
        this->_type = rhs._type;
    return (*this);
}

void Dog::makeSound() const
{
    std::cout << "Wouf!!!" << std::endl;
}

Dog::~Dog()
{
    std::cout << "Called Destructor Dog" << std::endl;
}