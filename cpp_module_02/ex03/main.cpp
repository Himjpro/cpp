/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjafari <mjafari@student.42wolfsburg.de>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/21 17:05:56 by mjafari           #+#    #+#             */
/*   Updated: 2022/09/24 15:17:54 by mjafari          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include "Point.hpp"

int	main(void)
{
	Point	a(0, 0);
	Point	b(10, 0);
	Point	c(0, 10);
	Point	p1(0, 0);
	Point	p2(10, 0);
	Point	p3(0, 10);
	Point	p4(3, 3);
	Point	p5(5.5f, 5.5f);
	Point	p6(5, 5);

	std::cout << "point a = " << a << std::endl;
	std::cout << "point b = " << b << std::endl;
	std::cout << "point c = " << c << std::endl;
	std::cout << "point p1 = " << p1 << std::endl;
	std::cout << "point p1 = " ;
	bsp(a,b,c,p1);
	std::cout << "point p2 = " << p2 << std::endl;
	std::cout << "point p2 = " ;
	bsp(a,b,c,p2);
	std::cout << "point p3 = " << p3 << std::endl;
	std::cout << "point p3 = " ;
	bsp(a,b,c,p3);
	std::cout << "point p4 = " << p4 << std::endl;
	std::cout << "point p4 = " ;
	bsp(a,b,c,p4);
	std::cout << "point p5 = " << p5 << std::endl;
	std::cout << "point p5 = " ;
	bsp(a,b,c,p5);
	std::cout << "point p6 = " << p6 << std::endl;
	std::cout << "point p6 = " ;
	bsp(a,b,c,p6);
	return (0);
}
