/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agrimald <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/28 15:46:41 by agrimald          #+#    #+#             */
/*   Updated: 2024/08/28 15:46:42 by agrimald         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Animal.hpp"

Cat::Cat()
{
    std::cout << "Called Constructor Cat" << std::endl;
}

Cat::~Cat()
{
    std::cout << "Called Destructor Cat" << std::endl;
}