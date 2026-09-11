/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkonstan <hkonstan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/11 14:50:05 by hkonstan          #+#    #+#             */
/*   Updated: 2026/09/11 18:38:53 by hkonstan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "FragTrap.hpp"

// Orthodox Canonical Format Functions

FragTrap::FragTrap(): ClapTrap(){
	std::cout << "FragTrap Default constructor called\n";
	this->HitPoints = 100;
	this->EnergyPoints = 100;
	this->AttackDamage = 30; 
}

FragTrap::FragTrap(const FragTrap& other): ClapTrap(other){
	std::cout << "FragTrap Copy constructor called\n";
}

FragTrap& FragTrap::operator=(const FragTrap& other){
	std::cout << "FragTrap Copy assignment operator called\n";
	if (this != &other)
		ClapTrap::operator=(other);
	return *this;
}

FragTrap::~FragTrap(){
	std::cout << "FragTrap destructor called\n";
}

// Name constructor

FragTrap::FragTrap(std::string name): ClapTrap(name){
	std::cout << "FragTrap Name constructor called\n";
	this->HitPoints = 100;
	this->EnergyPoints = 100;
	this->AttackDamage = 30; 
}

// FragTrap Actions

void FragTrap::attack(const std::string& target){
	if(this->HitPoints == 0){
		std::cout << "FragTrap" << this->name\
		<< " is dead so it can't attack!\n";
		return;
	}
	if (this->EnergyPoints < 1){
		std::cout << "FragTrap" << this->name\
		<< " run out of Energy Points so it cant attack!\n";
		return;
	}
	std::cout << "FragTrap " << this->name <<  " attacks " << target\
	 << " causing " << this->AttackDamage<< " points of damage!\n";
}

void FragTrap::highFiveGuys(){
	std::cout << "FragTrap " << this->name << " said 'Fire in the Holeeee!'\n";
}