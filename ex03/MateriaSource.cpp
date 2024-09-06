/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agrimald <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/06 18:17:54 by agrimald          #+#    #+#             */
/*   Updated: 2024/09/06 18:17:55 by agrimald         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "MateriaSource.hpp"

MateriaSource::MateriaSource()
{
    for (int i = 0;  i < SLOTS; i++)
    {
        _materia[i] = 0;
    }
}

MateriaSource::MateriaSource(const MateriaSource  &cpy)
{
    for (int i = 0; i < 4; i++)
    {
        if (cpy._materia[i])
            _materia[i] = cpy._materia[i]->clone();
        else
            _materia[i] = NULL;
    }
}

MateriaSource &MateriaSource::operator=(const MateriaSource  &rhs)
{
    for (int i = 0; i < 4; i++)
    {
        if (rhs._materia[i])
            _materia[i] = rhs._materia[i]->clone();
        else
            _materia[i]= NULL;
    }
    return *this;
}

MateriaSource::~MateriaSource()
{
    for (int i = 0; i < SLOTS; i++)
    {
        delete _materia[i];
    }
}

void MateriaSource::learnMateria(AMateria* materia)
{
    if (!materia)
    {
        std::cerr << "ERROR: materia does not exits" << std::endl;
        return ;
    }
    for (int i = 0; i < SLOTS; i++)
    {
        if (!_materia[i])
        {
            this->_materia[i] = materia->clone();
            return ;
        }
    }
}

AMateria* MateriaSource::createMateria(const std::string type)
{
    for (int i = 0; i < 4; i++)
    {
        if (_materia[i]->getType() == type)
            return (_materia[i]);
    }
    return (0);
}

void MateriaSource::printMaterias(void)
{
    for (int i = 0; i < 4; i++)
    {
        if (_materia[i])
            std::cout << "THE MATERIA SLOT " << i << " IS " << _materia[i]->getType() << " ." << std::endl;
        else
            std::cout << "THE MATERIA SLOT " << i << " IS EMPTY." << std::endl;
    }
}