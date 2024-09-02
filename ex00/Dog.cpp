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
    std::cout << "\033[36mCalled Constructor Dog\033[0m" << std::endl;
}

Dog::Dog(const Dog& cpy) : Animal(cpy)
{
    std::cout << "\033[36mCalled Constructor Dog copy\033[0m" << std::endl;
    *this = cpy;
}

Dog &Dog::operator=(const Dog &rhs)
{
    std::cout << "\033[36mCalled Constructor Dog Operator\033[0m" << std::endl;
    if (this != &rhs)
        this->_type = rhs._type;
    return *this;
}

void Dog::makeSound()const
{
    std::cout << "\033[36mWoof!!!\033[0m" << std::endl;
}

Dog::~Dog()
{
    std::cout << "\033[36mCalled Destructor Dog\033[0m" << std::endl;
}
