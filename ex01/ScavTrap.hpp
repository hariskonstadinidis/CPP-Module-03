/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hariskon <hariskon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/10 18:46:41 by hkonstan          #+#    #+#             */
/*   Updated: 2026/09/13 17:37:24 by hariskon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

class ScavTrap: public ClapTrap{
	protected:
		unsigned const int _HitPoints = 100;
		unsigned const int _EnergyPoints = 50;
		unsigned const int _AttackDamage = 20;

	public:
	//Orthodox Canonical Format Functions
	ScavTrap();
	ScavTrap(const ScavTrap& other);
	ScavTrap& operator=(const ScavTrap& other);
	~ScavTrap();
	
	//My constructor
	ScavTrap(std::string name);

	//ScavTrap Action Functions
	void attack(const std::string& target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);
	void guardGate();
};