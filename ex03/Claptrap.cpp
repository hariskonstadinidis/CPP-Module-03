/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Claptrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkonstan <hkonstan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/10 16:24:18 by hkonstan          #+#    #+#             */
/*   Updated: 2026/09/11 20:06:56 by hkonstan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "ClapTrap.hpp"

//Orthodox Canonical Format Functions
ClapTrap::ClapTrap(){
	std::cout << "Claptrap Default Constructor called\n";
	this->name = "NoName";
	this->HitPoints = 10;
	this->EnergyPoints = 10;
	this->AttackDamage = 0;
}

ClapTrap::ClapTrap(const ClapTrap& other){
	std::cout << "Copy Claptrap Constructor called\n";
	*this = other;
}

ClapTrap& ClapTrap::operator=(const ClapTrap& other){
	std::cout << "Copy Claptrap operator called\n";
	if (this != &other){
		this->name = other.name;
		this->HitPoints = other.HitPoints;
		this->EnergyPoints = other.EnergyPoints;
		this->AttackDamage = other.AttackDamage;
	}
	return *this;
}

ClapTrap::~ClapTrap(){
	std::cout << "Claptrap Destructor called\n\n";
}

//My Constructor
ClapTrap::ClapTrap(std::string name){
	std::cout << "Claptrap name Constructor called\n";
	this->name = name;
	this->HitPoints = 10;
	this->EnergyPoints = 10;
	this->AttackDamage = 0;
}

//Action Functions
void ClapTrap::attack(const std::string& target){
	if(this->HitPoints == 0){
		std::cout << this->name\
		<< " is dead so it can't attack!\n";
		return;
	}
	if (this->EnergyPoints < 1){
		std::cout << this->name\
		<< " run out of Energy Points so it cant attack!\n";
		return;
	}
	std::cout << this->name <<  " attacks " << target\
	 << " causing " << this->AttackDamage<< " points of damage!\n"\
	;
}

void ClapTrap::takeDamage(unsigned int amount){
	if (this->HitPoints == 0){
		std::cout << this->name << " is already dead!\n";
		return;
	}
	std::cout << this->name << " took " << amount\
	<< " of damage!\n";
	if (this->HitPoints <= amount)
	{
		this->HitPoints = 0;
		std::cout << this->name << " DIED!\n";
	}
	else
		this->HitPoints-= amount;
}

void ClapTrap::beRepaired(unsigned int amount){
	if (this->EnergyPoints == 0){
		std::cout << this->name\
		<< " run out of Energy Points so it can't get repaired!\n";
		return;
	}
	if (this->HitPoints == 0){
		std::cout << this->name\
		<< " is DEAD so it can't get repaired!\n";
		return;
	}
	std::cout << this->name << " repaired " << amount\
	<< " of damage!\n";
	this->EnergyPoints--;
	this->HitPoints+= amount;
}

//Utility Functions
std::string ClapTrap::getName() const{
	return this->name;
}

unsigned int ClapTrap::getAttack() const{
	return this->AttackDamage;
}

unsigned int ClapTrap::getEnergy() const{
	return this->EnergyPoints;
}

unsigned int ClapTrap::getHitPoints() const{
	return this->HitPoints;
}

void ClapTrap::showInfo() const{
	std::cout << "My HP is: " << this->getHitPoints() << ", Energy is: "\
	<< this->getEnergy() << ", Atck Dmg is: " << this->getAttack() << ".\n";
}
