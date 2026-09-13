/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hariskon <hariskon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/11 14:50:02 by hkonstan          #+#    #+#             */
/*   Updated: 2026/09/13 17:44:34 by hariskon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
# include "ClapTrap.hpp"

class FragTrap: virtual public ClapTrap{
	protected:
		unsigned const int _HitPoints = 100;
		unsigned const int _EnergyPoints = 100;
		unsigned const int _AttackDamage = 30;
	
	public:
		FragTrap();									// DefaultConstructor
		FragTrap(const FragTrap& other);			// Copy constructor
		FragTrap& operator=(const FragTrap& other); // Copy assignment operator
		~FragTrap();								// Destructor
	
		FragTrap(std::string name);					// Name constructor
		
		// FragTrap Action Functions
		void attack(const std::string& target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);
		void highFiveGuys();
};