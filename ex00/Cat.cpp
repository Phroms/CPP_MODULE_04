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
    std::cout << "\033[32mCalled Constructor Cat\033[0m" << std::endl;
}

Cat::Cat(const Cat& cpy) : Animal(cpy)
{
    std::cout << "\033[32mCalled Constructor Cat 2\033[0m" << std::endl;
    *this = cpy;
}

Cat &Cat::operator=(const Cat &rhs)
{
    std::cout << "\033[32mCalled Constructor Cat Operator\033[0m" << std::endl;
    if (this != &rhs)
        this->_type = rhs._type;
    return *this;
}

void Cat::makeSound()const
{
    std::cout << "\033[32mMiaw!!!\033[0m" << std::endl;
}

Cat::~Cat()
{
    std::cout << "\033[32mCalled Destructor Cat\033[0m" << std::endl;
}