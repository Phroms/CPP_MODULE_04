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
    this->_name = rhs.getName();
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
    return *this;
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

void Character::equip(AMateria* materia)
{
    if (!materia)
    {
        std::cerr << "ERROR: materia does not exits" << std::endl;
        return ;
    }
    for (int i = 0; i < SLOTS; i++)
    {
        if (!this->_inventory[i])
        {
            this->_inventory[i] = materia->clone();
            std::cout << materia->getType() << " EQUIPPED IN " << i << " SLOTS." << std::endl;
            return ;
        }
    }
    std::cout << " Full Inventory " << std::endl;
}

void Character::unequip(int idx)
{
    if (idx >= 0 && idx < 4)
    {
        if (_inventory[idx])
        {
            for (int i = 0; i < 100; i++)
            {
                if (!_garbage)
                {
                    this->_garbage[i] = _inventory[idx]->clone();
                }
            }
            delete _inventory[idx];
            _inventory[idx] = NULL;
            std::cout << "THE MATERIA IN SLOT: " << idx << " WAS UNEQUIPPED." << std::endl;
        }
        else
        {
            std::cout << "SLOT: " << idx << " IT IS TOTALLY EMPTY." << std::endl;
        }
    }
    else
    {
        std::cout << " IT WAS NOT POSSIBLE TO PROCEED WITHOUT EQUIPPING. AN INCORRECT INVENTORY SLOT WAS PROVIDED." << std::endl;
    }
}

void Character::use(int idx, ICharacter& target)
{
    if (_inventory[idx])
    {
        if (idx >= 0 && idx < 4 && _inventory[idx])
            _inventory[idx]->use(target);
    }
    else
        std::cout << "THERE IS NO MATERIA IN THIS SLOT: " << idx << " to target " << target.getName() << " with!" << std::endl;
}

void Character::printinventory(void)
{
    for (int i = 0; i < 4; i++)
    {
        if (_inventory[i])
            std::cout << "THE INVENTORY SLOT " << i << " IS " << _inventory[i]->getType() << "." << std::endl;
        else
            std::cout << "THE INVENTORY SLOT " << i << " IS EMPTY." << std::endl;
    }
}