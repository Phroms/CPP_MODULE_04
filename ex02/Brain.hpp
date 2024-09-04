/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agrimald <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/04 16:50:48 by agrimald          #+#    #+#             */
/*   Updated: 2024/09/04 16:50:49 by agrimald         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

# include "Animal.hpp"

class Brain
{
    private:
        std::string _ideas[100];
    public:
        Brain();
        Brain(const Brain &cpy);
        Brain &operator=(const Brain &rhs);
        std::string getType(int index) const;
        void setType(int index, const std::string &idea);
        ~Brain();
};

#endif