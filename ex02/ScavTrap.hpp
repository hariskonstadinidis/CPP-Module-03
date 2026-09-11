/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkonstan <hkonstan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/10 18:46:41 by hkonstan          #+#    #+#             */
/*   Updated: 2026/09/11 18:22:16 by hkonstan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
# include "ClapTrap.hpp"

class ScavTrap: public ClapTrap{
	
	public:
		ScavTrap();									// DefaultConstructor
		ScavTrap(const ScavTrap& other);			// Copy constructor
		ScavTrap& operator=(const ScavTrap& other); // Copy assignment operator
		~ScavTrap();								// Destructor
	
		ScavTrap(std::string name);					// Name constructor

		// ScavTrap Action Functions
		void attack(const std::string& target);
		void guardGate();
};