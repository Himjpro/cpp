/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjafari <mjafari@student.42wolfsburg.de>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/21 16:18:29 by mjafari           #+#    #+#             */
/*   Updated: 2022/10/18 19:12:19 by mjafari          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#if !defined ANIMAL_HPP
#define ANIMAL_HPP
#include <iostream>
#include <string>

class Animal
{
protected: 
	std::string _type;

public:
	Animal(/* args */);
	Animal(Animal const &src);
	Animal &operator=(Animal const &src);
	virtual ~Animal();
	virtual void makeSound(void) const;
	virtual std::string getType(void) const;
	virtual void setType(std::string type);
};
#endif