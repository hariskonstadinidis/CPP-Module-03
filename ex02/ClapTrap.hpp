/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkonstan <hkonstan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/10 16:24:20 by hkonstan          #+#    #+#             */
/*   Updated: 2026/09/11 18:21:47 by hkonstan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

namespace Color
{
    const char* const RED   = "\033[31m";
    const char* const GREEN = "\033[32m";
    const char* const RESET = "\033[0m";
}

class ClapTrap{
	
	protected:
	std::string  name;
	unsigned int HitPoints;
	unsigned int EnergyPoints;
	unsigned int AttackDamage;

	public:
	//Orthodox Canonical Format Functions
	ClapTrap();
	ClapTrap(const ClapTrap& other);
	ClapTrap& operator=(const ClapTrap& other);
	~ClapTrap();

	//My constructor
	ClapTrap(std::string name);
	
	//Action Functions
	void attack(const std::string& target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);

	//Utility Functions
	std::string  getName();
	unsigned int getAttack();
	unsigned int getEnergy();
	unsigned int getHitPoints();
};