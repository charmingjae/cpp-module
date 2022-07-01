/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcha <mcha@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/01 19:31:22 by mcha              #+#    #+#             */
/*   Updated: 2022/07/01 20:38:59 by mcha             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap() {
    std::cout << "FragTrap default constructor is executed." << std::endl;
    this->_name = "";
    this->_hitPoints = 100;
    this->_energyPoints = 100;
    this->_attackDamage = 30;
}

FragTrap::FragTrap(std::string paramName) : ClapTrap(paramName) {
    std::cout << "FragTrap : " << paramName << " is created" << std::endl;
    this->_name = paramName;
    this->_hitPoints = 100;
    this->_energyPoints = 100;
    this->_attackDamage = 30;
}

FragTrap::FragTrap(const FragTrap &fragTrap) {
    std::cout << "FragTrap's copy constructor is executed." << std::endl;
    *this = fragTrap;
}

FragTrap::~FragTrap() {
    std::cout << "FragTrap " << this->_name << " is destructed" << std::endl;
}

FragTrap &FragTrap::operator=(const FragTrap &fragTrap) {
    std::cout << "FragTrap's assignment operator is executed." << std::endl;
    this->_name = fragTrap.getName();
    this->_hitPoints = fragTrap.getHitPoints();
    this->_energyPoints = fragTrap.getEnergyPoints();
    this->_attackDamage = fragTrap.getAttackDamage();
    return (*this);
}

void FragTrap::highFivesGuys(void) {
    if (this->isDead()) {
        std::cout << "FragTrap " << this->getName() << " is already dead ..."
                  << std::endl;
    } else {
        std::cout << "FragTrap " << this->getName() << " high-five!"
                  << std::endl;
    }
}