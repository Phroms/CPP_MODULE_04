/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agrimald <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/02 20:01:44 by agrimald          #+#    #+#             */
/*   Updated: 2024/09/02 20:01:46 by agrimald         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Brain.hpp"

Brain::Brain()
{
    std::cout << "Brain Called Constructor" << std::endl;
}

Brain::Brain(const Brain &cpy)
{
    *this = cpy;
    std::cout << "Brain Called Constructor copy" << std::endl;
}

Brain &Brain::operator=(const Brain &rhs)
{
    std::cout << "Brain Called Constructor operator" << std::endl;
    if (this != &rhs)
    {
        for (int i = 0; i < 100; i++)
        {
            this->ideas[i] = rhs.ideas[i];
        }
    }
    return *this;
}

std::string Brain::getType(int index) const
{
    return this->ideas[index];
}

//Cambia el valor de una idea en una nueva posicion especifica del arreglo, almacenando una nueva cadena
void Brain::setType(int index, const std::string &idea)
{
    ideas[index] = idea;
}

Brain::~Brain()
{
    std::cout << "Brain Called Destructor" << std::endl;
}