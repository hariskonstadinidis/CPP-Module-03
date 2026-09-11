/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkonstan <hkonstan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/10 16:24:14 by hkonstan          #+#    #+#             */
/*   Updated: 2026/09/11 20:05:35 by hkonstan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"

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
	DiamondTrap Diamond1("Diamond1");
	std::cout << "\n";
	
	Scav1.attack(Clap1.getName());
	Clap1.takeDamage(Scav1.getAttack());
	Clap1.showInfo();
	std::cout << "\n";
	Frag1.attack(Scav2.getName());
	Scav2.takeDamage(Frag1.getAttack());
	Scav2.showInfo();
	std::cout << "\n";
	Scav1.attack(Frag1.getName());
	Frag1.takeDamage(Scav1.getAttack());
	Frag1.showInfo();
	std::cout << "\n";
	Diamond1.attack(Frag1.getName());
	Frag1.takeDamage(Diamond1.getAttack());
	Frag1.showInfo();
	std::cout << "\n";
	Diamond1.whoAmI();
	Diamond1.showInfo();
	std::cout << "\n";
}