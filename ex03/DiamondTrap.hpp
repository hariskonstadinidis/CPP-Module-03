/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hariskon <hariskon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/11 18:53:04 by hkonstan          #+#    #+#             */
/*   Updated: 2026/09/13 18:20:41 by hariskon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
# include "FragTrap.hpp"
# include "ScavTrap.hpp"

class DiamondTrap:  public FragTrap,  public ScavTrap{
	private:
		std::string name;
		
	public:
		DiamondTrap();									  // DefaultConstructor
		DiamondTrap(const DiamondTrap& other);			  // Copy constructor
		DiamondTrap& operator=(const DiamondTrap& other); // Copy assignment operator
		~DiamondTrap();								      // Destructor
	
		DiamondTrap(std::string name);					  // Name constructor

		void attack(const std::string& target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);
		void whoAmI();
};