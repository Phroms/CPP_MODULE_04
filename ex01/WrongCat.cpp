/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agrimald <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/02 19:33:38 by agrimald          #+#    #+#             */
/*   Updated: 2024/09/02 19:33:39 by agrimald         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "WrongCat.hpp"

WrongCat::WrongCat() : WrongAnimal()
{
    this->_type = "Wrong Cat";
    std::cout << "Wrong Cat Called Constructor" << std::endl;
}

WrongCat::WrongCat(const WrongCat& cpy) : WrongAnimal(cpy)
{
    this->_type = cpy._type;
    std::cout << "Wrong Cat Called Constructor copy" << std::endl;
}

WrongCat &WrongCat::operator=(const WrongCat &rhs)
{
    std::cout << "Wrong Cat Called Constructor operator" << std::endl;
    if (this != &rhs)
        this->_type = rhs._type;
    return *this;
}

void WrongCat::makeSound() const
{
    std::cout << "Wrong sound Cat" << std::endl;
}

WrongCat::~WrongCat()
{
    std::cout << "Wrong Cat Called Destructor" << std::endl;
}