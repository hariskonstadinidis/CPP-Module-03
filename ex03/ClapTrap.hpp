/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkonstan <hkonstan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/10 16:24:20 by hkonstan          #+#    #+#             */
/*   Updated: 2026/09/11 19:52:29 by hkonstan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
# include <iostream>

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
	std::string  getName() const;
	unsigned int getAttack() const;
	unsigned int getEnergy() const;
	unsigned int getHitPoints() const;
	void		 showInfo() const;
};