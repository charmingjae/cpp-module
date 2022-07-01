/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcha <mcha@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/01 14:40:21 by mcha              #+#    #+#             */
/*   Updated: 2022/07/01 19:23:09 by mcha             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
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

void test(void) {
    // Create object
    ClapTrap mcha("Mcha");
    ClapTrap jule("Jule");
    ScavTrap jisk("Jiskim");
    {
        ClapTrap *extra = new ScavTrap("extra");
        delete extra;
    }

    // Show status
    showClapTrapStatus(mcha);
    showClapTrapStatus(jule);
    showScavTrapStatus(jisk);

    // Scav attack Clap
    jisk.attack("Mcha");
    mcha.takeDamage(jisk.getAttackDamage());

    // Show status
    showClapTrapStatus(mcha);
    showClapTrapStatus(jule);
    showScavTrapStatus(jisk);

    for (int i = 0; i < 11; i++) {
        jule.attack("Jiskim");
        jisk.takeDamage(jule.getAttackDamage());
    }

    // Show status
    showClapTrapStatus(mcha);
    showClapTrapStatus(jule);
    showScavTrapStatus(jisk);
}

int main(void) {
    test();
    // system("leaks ex01");
    return (1);
}