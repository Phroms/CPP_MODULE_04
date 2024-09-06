/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agrimald <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/04 18:38:25 by agrimald          #+#    #+#             */
/*   Updated: 2024/09/04 18:38:26 by agrimald         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
# define AMATERIA_HPP

# include <iostream>
# include <string.h>
# include "ICharacter.hpp"

class AMateria
{
    protected:
        std::string _type;
    public:
        AMateria();
        AMateria(std::string type);
        AMateria(const AMateria &cpy);
        AMateria &operator=(const AMateria &rhs);
        std::string getType()const;
        virtual AMateria* clone() const = 0;
        virtual void use(ICharacter& target) = 0;
        virtual ~AMateria();
};

#endif