/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjafari <mjafari@student.42wolfsburg.de>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 19:19:18 by mjafari           #+#    #+#             */
/*   Updated: 2022/09/16 18:04:51 by mjafari          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main(void)
{
	Harl h1;
	h1.complain("DEBUG");
	h1.complain("ERROR");
	h1.complain("WARNING");
	h1.complain("INFO");
	return(0);
}
