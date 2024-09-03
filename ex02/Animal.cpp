/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agrimald <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/03 18:53:06 by agrimald          #+#    #+#             */
/*   Updated: 2024/09/03 18:53:07 by agrimald         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Animal.hpp"

std::string mensaje(std::string msg)
{
    msg = "Funcionaaa!!!!";

    std::cout << "Imprimendo mensaje: " << msg << std::endl;
    return (msg);
}