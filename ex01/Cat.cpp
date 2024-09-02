/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agrimald <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/02 19:08:17 by agrimald          #+#    #+#             */
/*   Updated: 2024/09/02 19:08:18 by agrimald         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Cat.hpp"

Cat::Cat() : Animal("Cat")
{
    std::cout << "Called Constructor Cat" << std::endl;
}

Cat::Cat(const Cat& cpy) : Animal(cpy)
{
    this->_type = cpy._type;
}

Cat &Cat::operator=(const Cat &rhs)
{
    if (this != &rhs)
        this->_type = rhs._type;
    return *this;
}

void Cat::makeSound() const
{
    std::cout << "Meow!!!" << std::endl;
}

Cat::~Cat()
{
    std::cout << "Called Destructor Cat" << std::endl;
}