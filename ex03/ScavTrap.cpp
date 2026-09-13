/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hariskon <hariskon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/10 18:46:43 by hkonstan          #+#    #+#             */
/*   Updated: 2026/09/13 18:40:50 by hariskon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "ScavTrap.hpp"

//Orthodox Canonical Format Functions
ScavTrap::ScavTrap() :ClapTrap(){
	std::cout << "ScavTrap Default Constructor called for NoName\n";
	this->HitPoints = this->_HitPoints;
	this->EnergyPoints = this->_EnergyPoints;
	this->AttackDamage = this->_AttackDamage; 
}

ScavTrap::ScavTrap(const ScavTrap& other) :ClapTrap(other){
	std::cout << "ScavTrap Copy Constructor called for " << this->name << "\n";
}

ScavTrap& ScavTrap::operator=(const ScavTrap& other){
	if (this != &other)
		ClapTrap::operator=(other);
	return *this;
}

ScavTrap::~ScavTrap(){
	std::cout << "ScavTrap Destructor called for " << this->name << "\n";
}

//Name Constructor
ScavTrap::ScavTrap(std::string name) :ClapTrap(name){
	std::cout << "ScavTrap name Constructor called for " << name << "\n";
	this->HitPoints = this->_HitPoints;
	this->EnergyPoints = this->_EnergyPoints;
	this->AttackDamage = this->_AttackDamage; 
}

//ScavTrap Action Functions
void ScavTrap::attack(const std::string& target){
	if(this->HitPoints == 0){
		std::cout << "ScavTrap " << this->name\
		<< " is dead so it can't attack!\n";
		return;
	}
	if (this->EnergyPoints < 1){
		std::cout << "ScavTrap " << this->name\
		<< " run out of Energy Points so it cant attack!\n";
		return;
	}
	std::cout << "ScavTrap " << this->name <<  " attacks " << target\
	<< " causing " << this->AttackDamage<< " points of damage!\n";
	this->EnergyPoints--;
}

void ScavTrap::takeDamage(unsigned int amount){
	if (this->HitPoints == 0){
		std::cout << "ScavTrap " << this->name << " is already dead!\n";
		return;
	}
	std::cout << "ScavTrap " << this->name << " took " << amount\
	<< " points of damage!\n";
	if (this->HitPoints <= amount)
	{
		this->HitPoints = 0;
		std::cout << "ScavTrap " << this->name << " DIED!\n";
	}
	else
		this->HitPoints-= amount;
}

void ScavTrap::beRepaired(unsigned int amount){
	if (this->EnergyPoints == 0){
		std::cout << "ScavTrap " << this->name\
		<< " run out of Energy Points so it can't get repaired!\n";
		return;
	}
	if (this->HitPoints == 0){
		std::cout << "ScavTrap " << this->name\
		<< " is DEAD so it can't get repaired!\n";
		return;
	}
	std::cout << "ScavTrap " << this->name << " repaired " << amount\
	<< " of damage!\n";
	this->EnergyPoints--;
	this->HitPoints+= amount;
}

void ScavTrap::guardGate(){
	std::cout << "ScavTrap " << this->name << " is now in Gate Keeper mode!\n";
}
