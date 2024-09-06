/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ICharacter.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agrimald <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/05 17:01:37 by agrimald          #+#    #+#             */
/*   Updated: 2024/09/05 17:01:38 by agrimald         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICHARACTER_HPP
# define ICHARACTER_HPP

# include "AMateria.hpp"

class AMateria;

class ICharacter
{
    public:
        //Destructor virtual que permite herencia polimorfica
        virtual ~ICharacter() {}
        //Metodo que devuelve el nombre del personaje
        virtual std::string getName() const = 0;
        //Metodo que permite al personaje equipar una AMateria en su inventario
        virtual void equip(AMateria* materia) = 0;
        //Metodo que permite al personae desequipar una AMateria en una posicion especifica del inventario
        virtual void unequip(int idx) = 0;
        //Metodo que permite al personaje usar un AMateria de su inventario en otro personaje (target)
        virtual void use(int idx, ICharacter& target) = 0;
        //Igualar un metodo a 0 lo convierte en VIRTUAL PURO, obligando a las clases derivadas a implementarlo
};

#endif