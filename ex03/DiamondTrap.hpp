/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkonstan <hkonstan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/11 18:53:04 by hkonstan          #+#    #+#             */
/*   Updated: 2026/09/11 20:13:33 by hkonstan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
# include "FragTrap.hpp"
# include "ScavTrap.hpp"

class DiamondTrap: virtual public FragTrap, virtual public ScavTrap{
	private:
		std::string name;
		
	public:
		DiamondTrap();									  // DefaultConstructor
		DiamondTrap(const DiamondTrap& other);			  // Copy constructor
		DiamondTrap& operator=(const DiamondTrap& other); // Copy assignment operator
		~DiamondTrap();								      // Destructor
	
		DiamondTrap(std::string name);					  // Name constructor

		void attack(const std::string& target);
		void whoAmI();
};