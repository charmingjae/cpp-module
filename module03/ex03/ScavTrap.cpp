/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcha <mcha@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/01 16:30:12 by mcha              #+#    #+#             */
/*   Updated: 2022/07/01 19:53:24 by mcha             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap() {
    std::cout << "ScavTrap default constructor is executed." << std::endl;
    // Bind value
    this->_name = "";
    this->_hitPoints = 100;
    this->_energyPoints = 50;
    this->_attackDamage = 20;
}

ScavTrap::ScavTrap(std::string paramName) : ClapTrap(paramName) {
    std::cout << "ScavTrap " << paramName << " is created" << std::endl;
    this->_name = paramName;
    this->_hitPoints = 100;
    this->_energyPoints = 50;
    this->_attackDamage = 20;
}

ScavTrap::ScavTrap(const ScavTrap &scavTrap) {
    std::cout << "ScavTrap's copy constructor is executed." << std::endl;
    *this = scavTrap;
}

ScavTrap::~ScavTrap() {
    std::cout << "ScavTrap " << this->_name << " is destructed" << std::endl;
}

ScavTrap &ScavTrap::operator=(const ScavTrap &scavTrap) {
    std::cout << "ScavTrap's assignment operator is executed." << std::endl;
    this->_name = scavTrap.getName();
    this->_hitPoints = scavTrap.getHitPoints();
    this->_energyPoints = scavTrap.getEnergyPoints();
    this->_attackDamage = scavTrap.getAttackDamage();
    return (*this);
}

void ScavTrap::attack(const std::string &target) {
    if (this->isInOperable()) {
        std::cout << "ScavTrap " << this->getName() << " can't attack"
                  << std::endl;
    } else {
        std::cout << "ScavTrap " << this->getName() << " attacks " << target
                  << " , causing " << this->getAttackDamage()
                  << " points of damage !" << std::endl;
        this->_energyPoints -= 1;
    }
}

void ScavTrap::guardGate(void) {
    if (this->isDead()) {
        std::cout << "ScavTrap " << this->getName()
                  << " is not gate keeper mode" << std::endl;
    } else {
        std::cout << "ScavTrap " << this->getName()
                  << " is now on gate keeper mode" << std::endl;
    }
}
