/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agrimald <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/28 15:46:41 by agrimald          #+#    #+#             */
/*   Updated: 2024/08/28 15:46:42 by agrimald         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Cat.hpp"

Cat::Cat() : Animal("Cat")
{
    std::cout << "Called Constructor Cat" << std::endl;
}

Cat::Cat(const Cat& cpy) : Animal(cpy)
{
    std::cout << "Called Constructor Cat 2" << std::endl;
    *this = cpy;
}

Cat &Cat::operator=(const Cat &rhs)
{
    std::cout << "Called Constructor Cat Operator" << std::endl;
    if (this != &rhs)
        this->_type = rhs._type;
    return *this;
}

void Cat::makeSound()const
{
    std::cout << "Miaw!!!" << std::endl;
}

Cat::~Cat()
{
    std::cout << "Called Destructor Cat" << std::endl;
}