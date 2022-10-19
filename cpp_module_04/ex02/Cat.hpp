/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjafari <mjafari@student.42wolfsburg.de>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 12:43:35 by mjafari           #+#    #+#             */
/*   Updated: 2022/10/19 11:32:07 by mjafari          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#if !defined CAT_HPP
#define CAT_HPP

#include "AAnimal.hpp"
#include "Brain.hpp"

class Cat : public AAnimal
{
private: 
	std::string _type;
	Brain *_brain;

public:
	Cat(/* args */);
	Cat(Cat const &src);
	Cat &operator=(Cat const &src);
	~Cat();
	void makeSound(void) const;
	std::string getType(void) const;
	void setType(std::string type);
	Brain* getBrain(void) const;
};
#endif