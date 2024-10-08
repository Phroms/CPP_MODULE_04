/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agrimald <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/03 18:53:15 by agrimald          #+#    #+#             */
/*   Updated: 2024/09/03 18:53:16 by agrimald         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <iostream>
# include <string.h>

class Animal
{
    protected:
        std::string _type;
        Animal(std::string type);
    public:
        Animal();
        Animal(const Animal &cpy);
        Animal &operator=(const Animal &rhs);
        std::string getType()const;
        virtual void makeSound()const;
        virtual ~Animal();
};

#endif