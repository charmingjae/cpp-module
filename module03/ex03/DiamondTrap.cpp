/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcha <mcha@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/01 20:21:44 by mcha              #+#    #+#             */
/*   Updated: 2022/07/01 21:41:39 by mcha             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap() : ClapTrap(), FragTrap(), ScavTrap() {
    std::cout << "DiamondTrap default constructor is executed." << std::endl;
    // Bind Value
    this->_name = "";
    this->_hitPoints = 100;
    this->_energyPoints = 50;
    this->_attackDamage = 30;
}

DiamondTrap::DiamondTrap(std::string paramName)
    : ClapTrap(paramName + "_clap_name"), FragTrap(paramName),
      ScavTrap(paramName) {
    std::cout << "DiamondTrap with name is created" << std::endl;
    this->_name = paramName;
    this->_hitPoints = 100;
    this->_energyPoints = 50;
    this->_attackDamage = 30;
}

DiamondTrap::DiamondTrap(const DiamondTrap &diamondTrap)
    : ClapTrap(diamondTrap.getName() + "_clap_name") {
    std::cout << "DiamondTrap with copy constructor is created" << std::endl;
    this->_name = diamondTrap.getName();
    this->_hitPoints = diamondTrap.getHitPoints();
    this->_energyPoints = diamondTrap.getEnergyPoints();
    this->_attackDamage = diamondTrap.getAttackDamage();
}

DiamondTrap &DiamondTrap::operator=(const DiamondTrap &diamondTrap) {
    std::cout << "DiamondTrap's assignment operator is executed." << std::endl;
    this->_name = diamondTrap.getName();
    this->_hitPoints = diamondTrap.getHitPoints();
    this->_energyPoints = diamondTrap.getEnergyPoints();
    this->_attackDamage = diamondTrap.getAttackDamage();
    return (*this);
}

void DiamondTrap::whoAmI() {
    std::cout << "I'm " << this->getName() << std::endl;
}

DiamondTrap::~DiamondTrap() {
    std::cout << "DiamondTrap destructor is executed." << std::endl;
}