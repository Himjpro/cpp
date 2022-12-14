/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjafari <mjafari@student.42wolfsburg.de>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 12:44:06 by mjafari           #+#    #+#             */
/*   Updated: 2022/10/20 20:12:54 by mjafari          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
#define ICE_HPP

#include <iostream>
#include "AMateria.hpp"

class Ice: public AMateria
{
public:
	Ice(/* args */);
	Ice(Ice const &src);
	Ice &operator=(Ice const &src);
	~Ice();
	virtual AMateria *clone() const;
	virtual void use(ICharacter& target);
};

#endif