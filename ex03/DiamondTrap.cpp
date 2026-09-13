/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hariskon <hariskon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/11 18:47:58 by hkonstan          #+#    #+#             */
/*   Updated: 2026/09/13 18:21:03 by hariskon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(): ClapTrap(), FragTrap(), ScavTrap(){
	std::cout << "DiamondTrap Default Constructor called for NoName\n";
	this->name = "NoName";
	this->HitPoints = FragTrap::_HitPoints;
	this->EnergyPoints = ScavTrap::_EnergyPoints;
	this->AttackDamage = FragTrap::_AttackDamage;
}

DiamondTrap::DiamondTrap(const DiamondTrap& other):ClapTrap(), FragTrap(other), ScavTrap(other){
	std::cout << "DiamondTrap Copy Constructor called for " << this->name << "\n";
	*this = other;
}

DiamondTrap& DiamondTrap::operator=(const DiamondTrap& other){
	std::cout << "DiamondTrap Copy assignment operator called for " << this->name << "\n";
	if (this != &other)
	{
		ClapTrap::operator=(other);
		this->name = other.getName();
	}
	return *this;
}

DiamondTrap::~DiamondTrap(){
	std::cout << "DiamondTrap Destructor called for " << this->name << "\n";
}						              

DiamondTrap::DiamondTrap(std::string name): ClapTrap(name + "_clap_name"), FragTrap(name), ScavTrap(name){
	std::cout << "DiamondTrap Name constructor called for " << name << "\n";
	this->name = name;
	this->HitPoints = FragTrap::_HitPoints;
	this->EnergyPoints = ScavTrap::_EnergyPoints;
	this->AttackDamage = FragTrap::_AttackDamage;
}	

// DiamondTrap Action Functions
void DiamondTrap::attack(const std::string& target){
	ScavTrap::attack(target);
}

void DiamondTrap::takeDamage(unsigned int amount){
	if (this->HitPoints == 0){
		std::cout << "DiamondTrap " << this->name << " is already dead!\n";
		return;
	}
	std::cout << "DiamondTrap " << this->name << " took " << amount\
	<< " points of damage!\n";
	if (this->HitPoints <= amount)
	{
		this->HitPoints = 0;
		std::cout << "DiamondTrap " << this->name << " DIED!\n";
	}
	else
		this->HitPoints-= amount;
}

void DiamondTrap::beRepaired(unsigned int amount){
	if (this->EnergyPoints == 0){
		std::cout << "DiamondTrap " << this->name\
		<< " run out of Energy Points so it can't get repaired!\n";
		return;
	}
	if (this->HitPoints == 0){
		std::cout << "DiamondTrap " << this->name\
		<< " is DEAD so it can't get repaired!\n";
		return;
	}
	std::cout << "DiamondTrap " << this->name << " repaired " << amount\
	<< " of damage!\n";
	this->EnergyPoints--;
	this->HitPoints+= amount;
}

void DiamondTrap::whoAmI(){
	std::cout << "My ClapTrap name is: " << ClapTrap::getName()\
	<< " and my DiamondTrap name is: " << this->name << "\n";
}