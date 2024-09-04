/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agrimald <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/04 16:41:16 by agrimald          #+#    #+#             */
/*   Updated: 2024/09/04 16:41:18 by agrimald         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "WrongCat.hpp"

WrongCat::WrongCat() : WrongAnimal()
{
    this->_wrong_type = "Wrong Cat";
    std::cout << "WrongCat Called Constructor" << std::endl;
}

WrongCat::WrongCat(const WrongCat &cpy) : WrongAnimal(cpy)
{
    this->_wrong_type = cpy._wrong_type;
    std::cout << "WrongCat Called Constructor cpy" << std::endl; 
}

WrongCat &WrongCat::operator=(const WrongCat &rhs)
{
    std::cout << "WrongCat Called Constructor operator" << std::endl;
    if (this != &rhs)
    {
        this->_wrong_type = rhs._wrong_type;
    }
    return *this;
}

void WrongCat::makeSound()const
{
    std::cout << "Wrong sound Cat" << std::endl;
}

WrongCat::~WrongCat()
{
    std::cout << "WrongCat Called Destructor" << std::endl;
}