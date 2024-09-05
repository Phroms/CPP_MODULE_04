/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agrimald <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/05 18:08:06 by agrimald          #+#    #+#             */
/*   Updated: 2024/09/05 18:08:07 by agrimald         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Character.hpp"
# include "ICharacter.hpp"
# include "AMateria.hpp"

Character::Character()
    : _name("\033[97mUnknow\033[0m")
{
    for (int i = 0; i < SLOTS; i++)
    {
        _inventory[i] = NULL;
    }
    for (int i = 0; i < ACCUMULATOR; i++)
    {
        _garbage[i] = NULL; 
    }
}

Character::Character(std::string name)
    : _name(name)
{
    for (int i = 0; i < SLOTS; i++)
    {
        _inventory[i] = NULL;
    }
    for (int i = 0; i < ACCUMULATOR; i++)
    {
        _garbage[i] = NULL;
    }
} 

Character::Character(const Character &cpy)
{
    this->_name = cpy.getName();
    for (int i = 0; i < SLOTS; i++)
    {
        _inventory[i] = NULL;
        if (cpy._inventory[i] != NULL)
        {
            _inventory[i] = cpy._inventory[i]->clone();
        }
    }
    for (int i = 0; i < ACCUMULATOR; i++)
    {
        _garbage[i] = NULL;
        if (cpy._garbage[i] != NULL)
        {
            _garbage[i] = cpy._garbage[i]->clone();
        }
    }
}

Character &Character::operator=(const Character &rhs)
{
    this->_name = rhs._getName();
    for (int i = 0; i < SLOTS; i++)
    {
        if (this->_inventory[i] != NULL)
        {
            delete this->_inventory[i];
        }
        this->_inventory[i] = NULL;
        if (rhs._inventory[i] != NULL)
        {
            this->_inventory[i] = rhs._inventory[i]->clone();
        }
    }
    for (int i = 0; i < ACCUMULATOR; i++)
    {
        if (this->_garbage[i] != NULL)
        {
            delete this->_garbage[i];
        }
        this->_garbage[i] = NULL;
        if (rhs._garbage[i] != NULL)
        {
            this->_garbage[i] = rhs._garbage[i]->clone();
        }
    }
}

Character::~Character()
{
    for (int i = 0; i < SLOTS; i++)
    {
        if (_inventory[i])
        {
            delete _inventory[i];
            _inventory[i] = NULL;
        }
    }
    for (int i = 0; i < ACCUMULATOR; i++)
    {
        if (_garbage[i])
        {
            delete _garbage[i];
            _garbage[i] = NULL;
        }
    }
}

std::string Character::getName() const
{
    return _name;
}

