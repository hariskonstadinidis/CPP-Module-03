/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hariskon <hariskon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/10 16:24:14 by hkonstan          #+#    #+#             */
/*   Updated: 2026/09/13 17:30:38 by hariskon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "ClapTrap.hpp"

int main()
{
	ClapTrap 	Clap1("Clap1");
	std::cout << "\n";
	ClapTrap 	Clap2("Clap2");
	std::cout << "\n";
	ClapTrap 	Clap3("Clap3");
	std::cout << "\n";
	
	Clap2.showInfo();
	Clap2.attack(Clap1.getName());
	Clap1.takeDamage(Clap2.getAttack());
	Clap2.showInfo();
	std::cout << "\n";
	for (int i = 0; i < 10; i++)
		Clap2.beRepaired(15);
	Clap2.showInfo();
	std::cout << "\n";
	Clap3.showInfo();
	Clap2.attack(Clap3.getName());
	Clap3.takeDamage(10);
	Clap3.showInfo();
	std::cout << "\n";
	Clap2.showInfo();
	Clap3.attack(Clap2.getName());
	Clap2.takeDamage(Clap3.getAttack());
	Clap2.showInfo();
	std::cout << "\n";
}
