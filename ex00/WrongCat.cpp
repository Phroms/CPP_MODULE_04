/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agrimald <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/28 18:01:27 by agrimald          #+#    #+#             */
/*   Updated: 2024/08/28 18:01:28 by agrimald         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "WrongCat.hpp"

WrongCat::WrongCat() : WrongAnimal()
{
    this->_type = "Wrong Cat";
    std::cout << "\033[97mCalled Constructor Wrong Cat\033[0m" << std::endl;
}

WrongCat::WrongCat(const WrongCat& cpy) : WrongAnimal(cpy)
{
    this->_type = cpy._type;
    std::cout << "Called Constructor Wrong Cat cpy" << std::endl;
}

WrongCat &WrongCat::operator=(const WrongCat &rhs)
{
    if (this != &rhs)
        this->_type = rhs._type;
    std::cout << "\033[97mCalled Constructor Wrong Cat operator\033[0m" << std::endl;
    return *this;
}

void    WrongCat::makeSound()const
{
    std::cout << "\033[97mWrong sound Cat\033[0m" << std::endl;
}

WrongCat::~WrongCat()
{
    std::cout << "\033[97mCalled Destructor Wrong Cat\033[0m" << std::endl;
}
