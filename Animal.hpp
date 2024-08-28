/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agrimald <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/27 17:41:38 by agrimald          #+#    #+#             */
/*   Updated: 2024/08/27 17:41:39 by agrimald         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <iostream>
# include <string>
# include "Dog.hpp"
# include "Cat.hpp"

class Animal
{
    protected:
        std::string _type;
    public:
        Animal();
        virtual void makesound();
        ~Animal();
}

#endif