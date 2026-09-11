/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkonstan <hkonstan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/11 18:47:58 by hkonstan          #+#    #+#             */
/*   Updated: 2026/09/11 20:17:17 by hkonstan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(): ClapTrap(), FragTrap(), ScavTrap(){
	std::cout << "DiamondTrap Default Constructor called\n";
	this->name = "NoName";
	this->HitPoints = FragTrap::getHitPoints();
	this->EnergyPoints = ScavTrap::getEnergy();
	this->AttackDamage = FragTrap::getAttack();
}

DiamondTrap::DiamondTrap(const DiamondTrap& other):FragTrap(other), ScavTrap(other){
	std::cout << "DiamondTrap Copy Constructor called\n";
	*this = other;
}

DiamondTrap& DiamondTrap::operator=(const DiamondTrap& other){
	std::cout << "DiamondTrap Copy assignment operator called\n";
	if (this != &other)
	{
		ClapTrap::operator=(other);
		this->name = other.getName();
	}
	return *this;
}

DiamondTrap::~DiamondTrap(){
	std::cout << "DiamondTrap Destructor called\n";
}						              

DiamondTrap::DiamondTrap(std::string name): ClapTrap(name + "_clap_name"), FragTrap(name), ScavTrap(name){
	std::cout << "DiamondTrap Name constructor called\n";
	this->name = name;
	this->HitPoints = FragTrap::getHitPoints();
	this->EnergyPoints = ScavTrap::getEnergy();
	this->AttackDamage = FragTrap::getAttack();
}	

// DiamondTrap Action Functions
void DiamondTrap::attack(const std::string& target){
	ScavTrap::attack(target);
}

void DiamondTrap::whoAmI(){
	std::cout << "My ClapTrap name is: " << ClapTrap::getName()\
	<< " and my DiamondTrap name is: " << this->name << "\n";
}