/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcha <mcha@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/01 14:40:21 by mcha              #+#    #+#             */
/*   Updated: 2022/07/02 02:31:54 by mcha             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "DiamondTrap.hpp"
#include "FragTrap.hpp"
#include "ScavTrap.hpp"

void showStatus_1(ClapTrap &obj) {
    std::cout << "\n	[Clap] " << obj.getName()
              << "	HP :	" << obj.getHitPoints()
              << "	ENG :	" << obj.getEnergyPoints()
              << "	ATTK :	" << obj.getAttackDamage() << std::endl;
}

void showStatus_2(ScavTrap &obj) {
    std::cout << "	[Scav] " << obj.getName()
              << "	HP :	" << obj.getHitPoints()
              << "	ENG :	" << obj.getEnergyPoints()
              << "	ATTK :	" << obj.getAttackDamage() << "\n"
              << std::endl;
}

void showStatus_3(FragTrap &obj) {
    std::cout << "	[Frag] " << obj.getName()
              << "	HP :	" << obj.getHitPoints()
              << "	ENG :	" << obj.getEnergyPoints()
              << "	ATTK :	" << obj.getAttackDamage() << "\n"
              << std::endl;
}

void showStatus_4(DiamondTrap &obj) {
    std::cout << "	[Dia] " << obj.getName()
              << "	HP :	" << obj.getHitPoints()
              << "	ENG :	" << obj.getEnergyPoints()
              << "	ATTK :	" << obj.getAttackDamage() << "\n"
              << std::endl;
}

void test(void) {
    std::cout << "\n|---------------- Scene 02 ----------------|" << std::endl;
    {
        DiamondTrap *dia = new DiamondTrap("dia");
        ClapTrap *mcha = new ClapTrap("mcha");
        ClapTrap *scav = new ScavTrap("scav");

        dia->whoAmI();

        showStatus_1(*mcha);
        showStatus_1(*scav);
        showStatus_4(*dia);

        dia->attack("mcha");
        mcha->takeDamage(dia->getAttackDamage());
        dia->attack("scav");
        scav->takeDamage(dia->getAttackDamage());

        showStatus_1(*mcha);
        showStatus_1(*scav);
        showStatus_4(*dia);

        delete dia;
        delete mcha;
        delete scav;
    }
}

int main(void) {
    test();
    // system("leaks ex03");
    return (1);
}