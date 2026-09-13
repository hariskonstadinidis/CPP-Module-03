/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hariskon <hariskon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/10 16:24:14 by hkonstan          #+#    #+#             */
/*   Updated: 2026/09/13 17:34:59 by hariskon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "ScavTrap.hpp"

int main()
{
	ClapTrap 	Clap1("Clap1");
	std::cout << "\n";
	ScavTrap 	Scav1("Scav1");
	std::cout << "\n";
	ScavTrap 	Scav2("Scav2");
	std::cout << "\n";
	
	Clap1.showInfo();
	Scav1.attack(Clap1.getName());
	Clap1.takeDamage(Scav1.getAttack());
	Clap1.showInfo();
	std::cout << "\n";
	
	Scav2.showInfo();
	Scav1.attack(Scav2.getName());
	Scav2.takeDamage(Scav1.getAttack());
	Scav2.showInfo();
	std::cout << "\n";
	
	Scav2.showInfo();
	Scav1.attack(Scav2.getName());
	Scav2.takeDamage(Scav1.getAttack());
	Scav2.showInfo();
	std::cout << "\n";

	// Scav2.showInfo();
	// for (int i = 0; i < 51; i++)
	// 	Scav2.beRepaired(10);
	// Scav2.showInfo();
	// std::cout << "\n";

	Scav1.guardGate();
	Scav2.guardGate();
	std::cout << "\n";
}