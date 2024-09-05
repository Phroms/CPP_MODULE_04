/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agrimald <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/05 15:55:45 by agrimald          #+#    #+#             */
/*   Updated: 2024/09/05 15:55:46 by agrimald         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Ice.hpp"

Ice::Ice() : AMateria("\033[34mICE\033[0m")
{
    std::cout << "Ice Called Constructor" << std::endl;
}

Ice::Ice(const Ice &cpy) : AMateria(cpy)
{
    this->_type = cpy._type;
    std::cout << "Ice Called Constructor cpy" << std::endl;
}

Ice &Ice::operator=(const Ice &rhs)
{
    std::cout << "Ice Called Constructor operator" << std::endl;
    if (this != &rhs)
    {
        this->_type = rhs._type;
    }
    return *this;
}

AMateria* Ice::clone()const
{
    return new Ice(); //Retorna una copia de la instancia actual
}

// Sobrescribre el metodo "use" para aplicar un efecto especifico de hielo
void Ice::use(ICharacter &target)
{
    std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}

Ice::~Ice()
{
    std::cout << "Ice Called Destructor" << std::endl;
}