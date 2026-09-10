/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Claptrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkonstan <hkonstan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/10 16:24:18 by hkonstan          #+#    #+#             */
/*   Updated: 2026/09/10 19:41:09 by hkonstan         ###   ########.fr       */
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
	std::cout << "Claptrap Destructor called\n";
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
		std::cout << Color::RED << "ClapTrap" << this->name\
		<< " is dead so it can't attack!\n" << Color::RESET;
		return;
	}
	if (this->EnergyPoints < 1){
		std::cout << Color::RED << "ClapTrap" << this->name\
		<< " run out of Energy Points so it cant attack!\n" << Color::RESET;
		return;
	}
	std::cout << "ClapTrap " << this->name <<  " attacks " << target\
	 << " causing " << Color::RED << this->AttackDamage<< " points of damage!\n"\
	 << Color::RESET;
}

void ClapTrap::takeDamage(unsigned int amount){
	if (this->HitPoints == 0){
		std::cout << Color::RED << this->name << " is already dead!\n" << Color::RESET;
		return;
	}
	std::cout << Color::RED << "ClapTrap " << this->name << " took " << amount\
	<< " of damage!\n" << Color::RESET;
	if (this->HitPoints <= amount)
	{
		this->HitPoints = 0;
		std::cout << Color::RED << "ClapTrap " << this->name << " DIED!\n"\
		<< Color::RESET;
	}
	else
		this->HitPoints-= amount;
}

void ClapTrap::beRepaired(unsigned int amount){
	if (this->EnergyPoints == 0){
		std::cout << Color::GREEN << this->name\
		<< " run out of Energy Points so it can't get repaired!\n" << Color::RESET;
		return;
	}
	if (this->HitPoints == 0){
		std::cout << Color::GREEN << this->name\
		<< " is DEAD so it can't get repaired!\n" << Color::RESET;
		return;
	}
	std::cout << Color::GREEN << "ClapTrap " << this->name << " repaired " << amount\
	<< " of damage!\n" << Color::RESET;
	this->EnergyPoints--;
	this->HitPoints+= amount;
}

//Utility Functions
std::string ClapTrap::getName(){
	return this->name;
}

unsigned int ClapTrap::getAttack(){
	return this->AttackDamage;
}

unsigned int ClapTrap::getEnergy(){
	return this->EnergyPoints;
}

unsigned int ClapTrap::getHitPoints(){
	return this->HitPoints;
}
