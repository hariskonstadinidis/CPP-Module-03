/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkonstan <hkonstan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/10 18:46:43 by hkonstan          #+#    #+#             */
/*   Updated: 2026/09/10 19:46:20 by hkonstan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "ScavTrap.hpp"

//Orthodox Canonical Format Functions
ScavTrap::ScavTrap(){
	std::cout << "ScavTrap Default Constructor called\n";
	this->HitPoints = 100;
	this->EnergyPoints = 50;
	this->AttackDamage = 20; 
}

ScavTrap::ScavTrap(const ScavTrap& other){
	std::cout << "ScavTrap Copy Constructor called\n";
	*this = other;
}

ScavTrap& ScavTrap::operator=(const ScavTrap& other){
	if (this != &other)
	{
		this->name = other.name;
		this->AttackDamage = other.AttackDamage;
		this->EnergyPoints = other.EnergyPoints;
		this->HitPoints = other.HitPoints;
	}
	return *this;
}

ScavTrap::~ScavTrap(){
	std::cout << "ScavTrap Destructor called\n";
}

//My Constructor
ScavTrap::ScavTrap(std::string name){
	std::cout << "ScavTrap name Constructor called\n";
	this->name = name;
	this->HitPoints = 100;
	this->EnergyPoints = 50;
	this->AttackDamage = 20;
}

//ScavTrap Action Functions
void ScavTrap::attack(const std::string& target){
	if(this->HitPoints == 0){
		std::cout << Color::RED << "ScavTrap" << this->name\
		<< " is dead so it can't attack!\n" << Color::RESET;
		return;
	}
	if (this->EnergyPoints < 1){
		std::cout << Color::RED << "ScavTrap" << this->name\
		<< " run out of Energy Points so it cant attack!\n" << Color::RESET;
		return;
	}
	std::cout << Color::RED << "ScavTrap " << this->name <<  " attacks " << target\
	 << " causing " << this->AttackDamage<< " points of damage!\n" << Color::RESET;
}

void ScavTrap::guardGate(){
	std::cout << "ScavTrap " << this->getName() << " ia now in Gate Keeper mode!\n";
}
