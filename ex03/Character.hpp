/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agrimald <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/05 18:08:10 by agrimald          #+#    #+#             */
/*   Updated: 2024/09/05 18:08:12 by agrimald         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
# define CHARACTER_HPP

# include "AMateria.hpp"

# define SLOTS 4
# define ACCUMULATOR 100

class Character : public ICharacter
{
    private:
        std::string _name;
        AMateria*   _inventory[SLOTS];
        AMateria*   _garbage[100];
    public:
        Character();
        Character(std::string name);
        Character(const Character &cpy);
        Character &operator=(const Character &rhs);
        ~Character();

        std::string getName() const;

        void equip(AMateria* materia);
        void unequip(int idx);
        void use(int idx, ICharacter& target);
        void printinventory(void);
};

#endif