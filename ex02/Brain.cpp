/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agrimald <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/04 16:50:42 by agrimald          #+#    #+#             */
/*   Updated: 2024/09/04 16:50:44 by agrimald         ###   ########.fr       */
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
    std::cout << "Brain Called Constructor cpy" << std::endl;
}

Brain &Brain::operator=(const Brain &rhs)
{
    std::cout << "Brain Called Constructor operator" << std::endl;
    if (this != &rhs)
    {
        for (int i = 0; i < 100; i++)
        {
            this->_ideas[i] = rhs._ideas[i];
        }
    }
    return *this;
}

std::string Brain::getType(int index) const
{
    return this->_ideas[index];
}

void Brain::setType(int index, const std::string &idea)
{
    _ideas[index] = idea;
}

Brain::~Brain()
{
    std::cout << "Brain Called Destructor" << std::endl;
}