/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   IMateriaSource.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agrimald <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/05 17:01:58 by agrimald          #+#    #+#             */
/*   Updated: 2024/09/05 17:01:59 by agrimald         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef IMATERIASOURCE_HPP
# define IMATERIASOURCE_HPP

# include "AMateria.hpp"

class AMateria;

class IMateriaSource
{
    public:
        virtual ~IMateriaSource() {}
        //Metodo que permite que la fuente de materia aprenda una nueva AMateria para clonarla mas tarde
        virtual  void learnMateria(AMateria* materia) = 0;
        //Metodo que crea una nueva AMateria basada en un tipo previamente aprendido
        //Si el tipo no es conocido, devuelve nullptr
        virtual AMateria* createMateria(const std::string type) = 0;
        virtual void printMaterias(void) = 0;
};

#endif