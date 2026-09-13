/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hariskon <hariskon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/10 18:46:41 by hkonstan          #+#    #+#             */
/*   Updated: 2026/09/13 17:44:45 by hariskon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
# include "ClapTrap.hpp"

class ScavTrap: virtual public ClapTrap{
	protected:
		unsigned const int _HitPoints = 100;
		unsigned const int _EnergyPoints = 50;
		unsigned const int _AttackDamage = 20;

	public:
		ScavTrap();									// DefaultConstructor
		ScavTrap(const ScavTrap& other);			// Copy constructor
		ScavTrap& operator=(const ScavTrap& other); // Copy assignment operator
		~ScavTrap();								// Destructor
	
		ScavTrap(std::string name);					// Name constructor

		// ScavTrap Action Functions
		void attack(const std::string& target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);
		void guardGate();
};