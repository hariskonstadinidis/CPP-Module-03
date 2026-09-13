/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hariskon <hariskon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/10 16:24:14 by hkonstan          #+#    #+#             */
/*   Updated: 2026/09/13 17:42:36 by hariskon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main()
{
	ClapTrap 	Clap1("Clap1");
	std::cout << "\n";
	ScavTrap 	Scav1("Scav1");
	std::cout << "\n";
	ScavTrap 	Scav2("Scav2");
	std::cout << "\n";
	FragTrap 	Frag1("Frag1");
	std::cout << "\n";
	
	Clap1.showInfo();
	Scav1.attack(Clap1.getName());
	Clap1.takeDamage(Scav1.getAttack());
	Clap1.showInfo();
	std::cout << "\n";
	
	Scav2.showInfo();
	Frag1.attack(Scav2.getName());
	Scav2.takeDamage(Frag1.getAttack());
	Scav2.showInfo();
	std::cout << "\n";
	
	Frag1.showInfo();
	Scav1.attack(Frag1.getName());
	Frag1.takeDamage(Scav1.getAttack());
	Frag1.showInfo();
	std::cout << "\n";

	// Frag1.showInfo();
	// for (int i = 0; i < 101; i++)
	// 	Frag1.beRepaired(10);
	// Frag1.showInfo();
	// std::cout << "\n";

	Scav1.guardGate();
	Frag1.highFiveGuys();
	std::cout << "\n";
}