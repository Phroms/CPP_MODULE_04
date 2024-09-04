/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agrimald <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/04 16:31:41 by agrimald          #+#    #+#             */
/*   Updated: 2024/09/04 16:31:42 by agrimald         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

# include "Animal.hpp"

class WrongAnimal
{
    protected:
        std::string _wrong_type;
        WrongAnimal(std::string type);
    public:
        WrongAnimal();
        WrongAnimal(const WrongAnimal &cpy);
        WrongAnimal &operator=(const WrongAnimal &rhs);
        std::string setType()const;
        void makeSound()const;
        virtual ~WrongAnimal();
};

# endif