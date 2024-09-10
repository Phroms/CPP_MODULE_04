/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agrimald <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/28 17:40:34 by agrimald          #+#    #+#             */
/*   Updated: 2024/08/28 17:40:35 by agrimald         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

# include "Animal.hpp"

class WrongAnimal
{
    protected:
        std::string _type;
    public:
        WrongAnimal();
        WrongAnimal(const std::string type);
        WrongAnimal(const WrongAnimal& cpy);
        WrongAnimal &operator=(const WrongAnimal &rhs);
        std::string getType()const;
        virtual void makeSound()const;
        virtual ~WrongAnimal();
};

# endif