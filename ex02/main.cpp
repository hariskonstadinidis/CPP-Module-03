/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkonstan <hkonstan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/10 16:24:14 by hkonstan          #+#    #+#             */
/*   Updated: 2026/09/11 18:37:44 by hkonstan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main()
{
	ClapTrap Clap1("Clap1");
	ScavTrap Scav1("Scav1");
	ScavTrap Scav2("Scav2");
	FragTrap Frag1("Frag1");
	
	Scav1.attack(Clap1.getName());
	Clap1.takeDamage(Scav1.getAttack());
	Clap1.beRepaired(25);
	Scav1.attack(Scav2.getName());
	Scav2.takeDamage(Frag1.getAttack());
	
	Scav1.guardGate();
	Frag1.highFiveGuys();
}