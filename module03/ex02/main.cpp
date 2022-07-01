/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcha <mcha@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/01 14:40:21 by mcha              #+#    #+#             */
/*   Updated: 2022/07/01 19:53:23 by mcha             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include "ScavTrap.hpp"

void showClapTrapStatus(ClapTrap &obj) {
    std::cout << "\n[CLAP] " << obj.getName() << std::endl;
    std::cout << "HP	: " << obj.getHitPoints() << std::endl;
    std::cout << "ENERG	: " << obj.getEnergyPoints() << std::endl;
    std::cout << "ADM	: " << obj.getAttackDamage() << std::endl;
    std::cout << "\n";
}

void showScavTrapStatus(ScavTrap &obj) {
    std::cout << "\n[SCAV] " << obj.getName() << std::endl;
    std::cout << "HP	: " << obj.getHitPoints() << std::endl;
    std::cout << "ENERG	: " << obj.getEnergyPoints() << std::endl;
    std::cout << "ADM	: " << obj.getAttackDamage() << std::endl;
    std::cout << "\n";
}

void showFragTrapStatus(ClapTrap obj) {
    std::cout << "\n[FRAG] " << obj.getName() << std::endl;
    std::cout << "HP	: " << obj.getHitPoints() << std::endl;
    std::cout << "ENERG	: " << obj.getEnergyPoints() << std::endl;
    std::cout << "ADM	: " << obj.getAttackDamage() << std::endl;
    std::cout << "\n";
}

void test(void) {
    // Create object
    ClapTrap mcha("Mcha");
    ClapTrap jule("Jule");
    ScavTrap jisk("Jiskim");
    {
        std::cout << "\n|--------------------------------------|\n"
                  << std::endl;
        ClapTrap *ptr = new FragTrap("yeji");

        ptr->attack("my self");
        ptr->takeDamage(ptr->getAttackDamage());
        std::cout << "	Energy : " << ptr->getEnergyPoints()
                  << " HP : " << ptr->getHitPoints() << std::endl;
        ptr->beRepaired(10);
        std::cout << "	Energy : " << ptr->getEnergyPoints()
                  << " HP : " << ptr->getHitPoints() << std::endl;
        delete ptr;
    }
    std::cout << "\n|--------------------------------------|\n" << std::endl;
}

int main(void) {
    test();
    // system("leaks ex02");
    return (1);
}