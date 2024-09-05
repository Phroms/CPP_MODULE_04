/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agrimald <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/04 18:38:20 by agrimald          #+#    #+#             */
/*   Updated: 2024/09/04 18:38:21 by agrimald         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "AMateria.hpp"

AMateria::AMateria()
    : _type("Materia")
{
    std::cout << "AMateria Called Constructor" << std::endl;
}

AMateria::AMateria(std::string type)
    : type(type);
{
    std::cout << "AMateria Called Constructor type" << std::endl;
}

AMateria::AMateria(const AMateria &cpy)
{
    this->_type = cpy._type;
    std::cout << "AMateria Called Constructor cpy" << std::endl;
}

AMateria &AMateria::operator=(const AMateria &rhs)
{
    std::cout << "AMateria Called Constructor operator" << std::endl;
    if (this != &rhs)
    {
        this->_type = rhs._type;
    }
    return *this;
}

std::string AMateria::getType() const
{
    return this->_type;
}

AMateria::~AMateria()
{
    std::cout << "AMateria Called Destructor" << std::endl;
}

void AMateria::use(ICharacter& target) //Este metodo se sobrescribrira ensubclase y actualmente no utiliza 'target'
{
    (void)target; //Evita advertencias de parametros no utilizados
}