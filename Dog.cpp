/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agrimald <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/28 15:46:33 by agrimald          #+#    #+#             */
/*   Updated: 2024/08/28 15:46:35 by agrimald         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Dog.hpp"

Dog::Dog() : Animal("Dog")
{
    std::cout << "Called Constructor Dog" << std::endl;
}

Dog::Dog(const Dog& cpy) : Animal(cpy)
{
    std::cout << "Called Constructor Dog copy" << std::endl;
    *this = cpy;
}

Dog &Dog::operator=(const Dog &rhs)
{
    std::cout << "Calle Constructor Dog Operator" << std::endl;
    if (this != &rhs)
        this->_type = rhs._type;
    return *this;
}

void Dog::makeSound()const
{
    std::cout << "Woof!!!" << std::endl;
}

Dog::~Dog()
{
    std::cout << "Called Destructor Dog" << std::endl;
}
