/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkonstan <hkonstan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/10 16:24:14 by hkonstan          #+#    #+#             */
/*   Updated: 2026/09/10 18:27:14 by hkonstan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "ClapTrap.hpp"

int main()
{
	ClapTrap NPC1("NPC1");
	ClapTrap NPC2("NPC2");
	ClapTrap NPC3("NPC3");
	ClapTrap NPC4(NPC3);
	ClapTrap NPC5;
	
	// NPC5 = NPC4;
	
	NPC1.attack(NPC5.getName());
	NPC2.takeDamage(7);
	NPC3.takeDamage(9);
	NPC3.beRepaired(1);
	NPC3.beRepaired(1);
	NPC3.beRepaired(1);
	NPC3.beRepaired(1);
	NPC3.beRepaired(1);
	NPC3.beRepaired(1);
	NPC3.beRepaired(1);
	NPC3.beRepaired(1);
	NPC3.beRepaired(1);
	NPC3.beRepaired(1);
	NPC3.beRepaired(1);
	NPC3.takeDamage(9);
	NPC3.takeDamage(3);
	NPC3.takeDamage(3);
	NPC3.takeDamage(3);
	NPC3.attack(NPC1.getName());
}