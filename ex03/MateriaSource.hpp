/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agrimald <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/06 18:17:59 by agrimald          #+#    #+#             */
/*   Updated: 2024/09/06 18:18:00 by agrimald         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

# include "AMateria.hpp"
# include "IMateriaSource.hpp"

# define SLOTS 4

class MateriaSource : public  IMateriaSource
{
    private:
        AMateria*   _materia[SLOTS];
    public:
        MateriaSource();
        MateriaSource(const MateriaSource &cpy);
        MateriaSource &operator=(const MateriaSource  &rhs);
        ~MateriaSource();

        void learnMateria(AMateria* materia);
        AMateria*createMateria(const std::string type);
        void    printMaterias(void);
};

#endif