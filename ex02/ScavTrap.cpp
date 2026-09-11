/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkonstan <hkonstan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/10 18:46:43 by hkonstan          #+#    #+#             */
/*   Updated: 2026/09/11 18:09:52 by hkonstan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "ScavTrap.hpp"

// Orthodox Canonical Format Functions
ScavTrap::ScavTrap(): ClapTrap(){
	std::cout << "ScavTrap Default Constructor called\n";
	this->HitPoints = 100;
	this->EnergyPoints = 50;
	this->AttackDamage = 20; 
}

ScavTrap::ScavTrap(const ScavTrap& other): ClapTrap(other){
	std::cout << "ScavTrap Copy Constructor called\n";
}

ScavTrap& ScavTrap::operator=(const ScavTrap& other){
	if (this != &other)
		ClapTrap::operator=(other);
	return *this;
}

ScavTrap::~ScavTrap(){
	std::cout << "ScavTrap Destructor called\n";
}

// Name constructor
ScavTrap::ScavTrap(std::string name): ClapTrap(name){
	std::cout << "ScavTrap name Constructor called\n";
	this->HitPoints = 100;
	this->EnergyPoints = 50;
	this->AttackDamage = 20;
}

// ScavTrap action Functions
void ScavTrap::attack(const std::string& target){
	if(this->HitPoints == 0){
		std::cout << "ScavTrap" << this->name\
		<< " is dead so it can't attack!\n";
		return;
	}
	if (this->EnergyPoints < 1){
		std::cout << "ScavTrap" << this->name\
		<< " run out of Energy Points so it cant attack!\n";
		return;
	}
	std::cout << "ScavTrap " << this->name <<  " attacks " << target\
	 << " causing " << this->AttackDamage<< " points of damage!\n";
}

void ScavTrap::guardGate(){
	std::cout << "ScavTrap " << this->getName() << " is now in Gate Keeper mode!\n";
}
