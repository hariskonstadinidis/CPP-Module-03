/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkonstan <hkonstan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/10 16:24:14 by hkonstan          #+#    #+#             */
/*   Updated: 2026/09/10 19:37:29 by hkonstan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
// #include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main()
{
	ClapTrap NPC1("NPC1");
	ScavTrap newNPC1("newNPC");
	ScavTrap newNPC2("newNPC2");
	
	newNPC1.attack(NPC1.getName());
	NPC1.takeDamage(newNPC1.getAttack());
	NPC1.beRepaired(25);
	newNPC1.attack(NPC1.getName());
	newNPC1.attack(newNPC2.getName());
	newNPC2.takeDamage(newNPC1.getAttack());
}