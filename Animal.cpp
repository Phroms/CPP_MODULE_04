/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agrimald <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/27 17:41:32 by agrimald          #+#    #+#             */
/*   Updated: 2024/08/27 17:41:33 by agrimald         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal()
{
    std::cout << "Called Constructor Animal" << std::endl;
}

Animal::~Animal()
{
    std::cout << "Called Destructor Animal" << std::endl;
}