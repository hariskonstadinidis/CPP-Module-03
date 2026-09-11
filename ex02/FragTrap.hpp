/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkonstan <hkonstan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/11 14:50:02 by hkonstan          #+#    #+#             */
/*   Updated: 2026/09/11 18:27:44 by hkonstan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
# include "ClapTrap.hpp"

class FragTrap: public ClapTrap{
	public:
		FragTrap();									// DefaultConstructor
		FragTrap(const FragTrap& other);			// Copy constructor
		FragTrap& operator=(const FragTrap& other); // Copy assignment operator
		~FragTrap();								// Destructor
	
		FragTrap(std::string name);					// Name constructor
		
		// FragTrap Action Functions
		void attack(const std::string& target);
		void highFiveGuys();
};