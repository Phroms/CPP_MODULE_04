/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agrimald <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/28 15:46:24 by agrimald          #+#    #+#             */
/*   Updated: 2024/08/28 15:46:28 by agrimald         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

# include "Animal.hpp"
# include "Cat.hpp"

class Dog : public Animal
{
    private:
        std::string _dog;
    public:
        Dog();
        void    makesound();
        ~Dog();
};

# endif