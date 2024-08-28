/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agrimald <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/28 15:46:46 by agrimald          #+#    #+#             */
/*   Updated: 2024/08/28 15:46:47 by agrimald         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

# include "Animal_hpp"
# include "Dog.hpp"

class Cat : public Animal
{
    private:
        std::string _cat;
    public:
        Cat();
        void    makesound();
        ~Cat();
};

# endif