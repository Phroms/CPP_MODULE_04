/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agrimald <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/05 16:14:06 by agrimald          #+#    #+#             */
/*   Updated: 2024/09/05 16:14:08 by agrimald         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Cure.hpp"

Cure::Cure() : AMateria("\033[32mCURE\033[0m")
{
    //std::cout << "Cure Called Constructor" << std::endl;
}

Cure::Cure(const Cure &cpy) : AMateria(cpy)
{
    this->_type = cpy._type;
    //std::cout << "Cure Called Constructor cpy" << std::endl;
}

Cure &Cure::operator=(const Cure &rhs)
{
    //std::cout << "Cure Called Constructor operator" << std::endl
    if (this != &rhs)
    {
        this->_type = rhs._type;
    }
    return *this;
}

AMateria* Cure::clone()const
{
    return new Cure();
}

void Cure::use(ICharacter &target)
{
    std::cout << "* healts " << target.getName() << "'s wounds *" << std::endl;
}

Cure::~Cure()
{
    //std::cout << "Cure Called Destructor" << std::endl;
}