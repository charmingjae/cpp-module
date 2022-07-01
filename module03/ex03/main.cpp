/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcha <mcha@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/01 14:40:21 by mcha              #+#    #+#             */
/*   Updated: 2022/07/01 21:22:39 by mcha             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "DiamondTrap.hpp"
#include "FragTrap.hpp"
#include "ScavTrap.hpp"

void showClapTrapStatus(ClapTrap &obj) {
    std::cout << "\n[CLAP] " << obj.getName() << std::endl;
    std::cout << "HP	: " << obj.getHitPoints() << std::endl;
    std::cout << "ENERG	: " << obj.getEnergyPoints() << std::endl;
    std::cout << "ADM	: " << obj.getAttackDamage() << std::endl;
    std::cout << "\n";
}

void test(void) {
    DiamondTrap *diamond = new DiamondTrap("DIAMOND");
    diamond->whoAmI();
    std::cout << "|---------------------------------------------------|"
              << std::endl;
    std::cout << "| NAME	: " << diamond->getName() << std::endl;
    std::cout << "| HP	: " << diamond->getHitPoints() << std::endl;
    std::cout << "| ENEG	: " << diamond->getEnergyPoints() << std::endl;
    std::cout << "| ATTK	: " << diamond->getAttackDamage() << std::endl;
    std::cout << "|---------------------------------------------------|"
              << std::endl;

    // attack
    diamond->attack("my self");
    diamond->takeDamage(diamond->getAttackDamage());

    std::cout << "|---------------------------------------------------|"
              << std::endl;
    std::cout << "| NAME	: " << diamond->getName() << std::endl;
    std::cout << "| HP	: " << diamond->getHitPoints() << std::endl;
    std::cout << "| ENEG	: " << diamond->getEnergyPoints() << std::endl;
    std::cout << "| ATTK	: " << diamond->getAttackDamage() << std::endl;
    std::cout << "|---------------------------------------------------|"
              << std::endl;

    // attack
    diamond->beRepaired(20);

    std::cout << "|---------------------------------------------------|"
              << std::endl;
    std::cout << "| NAME	: " << diamond->getName() << std::endl;
    std::cout << "| HP	: " << diamond->getHitPoints() << std::endl;
    std::cout << "| ENEG	: " << diamond->getEnergyPoints() << std::endl;
    std::cout << "| ATTK	: " << diamond->getAttackDamage() << std::endl;
    std::cout << "|---------------------------------------------------|"
              << std::endl;
    delete diamond;
}

int main(void) {
    test();
    // system("leaks ex03");
    return (1);
}