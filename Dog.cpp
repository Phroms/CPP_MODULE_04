/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agrimald <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/28 15:46:33 by agrimald          #+#    #+#             */
/*   Updated: 2024/08/28 15:46:35 by agrimald         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Animal.hpp"

Dog::Dog()
{
    std::cout << "Called Constructor Dog" << std::endl;
}

Dog::~Dog()
{
    std::cout << "Called Destructor Dog" << std::endl;
}
