/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hariskon <hariskon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/11 14:50:05 by hkonstan          #+#    #+#             */
/*   Updated: 2026/09/13 18:40:39 by hariskon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "FragTrap.hpp"

//Orthodox Canonical Format Functions
FragTrap::FragTrap() :ClapTrap(){
	std::cout << "FragTrap Default Constructor called for NoName\n";
	this->HitPoints = this->_HitPoints;
	this->EnergyPoints = this->_EnergyPoints;
	this->AttackDamage = this->_AttackDamage; 
}

FragTrap::FragTrap(const FragTrap& other) :ClapTrap(other){
	std::cout << "FragTrap Copy Constructor called for " << this->name << "\n";
}

FragTrap& FragTrap::operator=(const FragTrap& other){
	if (this != &other)
		ClapTrap::operator=(other);
	return *this;
}

FragTrap::~FragTrap(){
	std::cout << "FragTrap Destructor called for " << this->name << "\n";
}

//Name Constructor
FragTrap::FragTrap(std::string name) :ClapTrap(name){
	std::cout << "FragTrap name Constructor called for " << name << "\n";
	this->HitPoints = this->_HitPoints;
	this->EnergyPoints = this->_EnergyPoints;
	this->AttackDamage = this->_AttackDamage; 
}

//FragTrap Action Functions
void FragTrap::attack(const std::string& target){
	if(this->HitPoints == 0){
		std::cout << "FragTrap " << this->name\
		<< " is dead so it can't attack!\n";
		return;
	}
	if (this->EnergyPoints < 1){
		std::cout << "FragTrap " << this->name\
		<< " run out of Energy Points so it cant attack!\n";
		return;
	}
	std::cout << "FragTrap " << this->name <<  " attacks " << target\
	<< " causing " << this->AttackDamage<< " points of damage!\n";
	this->EnergyPoints--;
}

void FragTrap::takeDamage(unsigned int amount){
	if (this->HitPoints == 0){
		std::cout << "FragTrap " << this->name << " is already dead!\n";
		return;
	}
	std::cout << "FragTrap " << this->name << " took " << amount\
	<< " points of damage!\n";
	if (this->HitPoints <= amount)
	{
		this->HitPoints = 0;
		std::cout << "FragTrap " << this->name << " DIED!\n";
	}
	else
		this->HitPoints-= amount;
}

void FragTrap::beRepaired(unsigned int amount){
	if (this->EnergyPoints == 0){
		std::cout << "FragTrap " << this->name\
		<< " run out of Energy Points so it can't get repaired!\n";
		return;
	}
	if (this->HitPoints == 0){
		std::cout << "FragTrap " << this->name\
		<< " is DEAD so it can't get repaired!\n";
		return;
	}
	std::cout << "FragTrap " << this->name << " repaired " << amount\
	<< " of damage!\n";
	this->EnergyPoints--;
	this->HitPoints+= amount;
}

void FragTrap::highFiveGuys(){
	std::cout << "FragTrap " << this->name << " said 'Fire in the Holeeee!'\n";
}