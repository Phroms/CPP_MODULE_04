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

class Animal
{
    protected:
        std::string _type;
    public:
        Animal();
        Animal(const std::string type);
        Animal(const Animal& cpy);
        Animal &operator=(const Animal &rhs);
        virtual void makeSound() const;
        std::string getType() const;
        virtual ~Animal();
};

#endif