/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcha <mcha@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/01 14:22:44 by mcha              #+#    #+#             */
/*   Updated: 2022/07/01 19:23:34 by mcha             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>
#include <string>

class ClapTrap {
  protected:
    std::string _name;
    unsigned int _hitPoints;
    unsigned int _energyPoints;
    unsigned int _attackDamage;

  public:
    // Constructor, Destructor
    ClapTrap();
    ClapTrap(std::string paramName);
    ClapTrap(const ClapTrap &clapTrap);
    virtual ~ClapTrap();

    // operator
    ClapTrap &operator=(const ClapTrap &clapTrap);

    // function
    void attack(const std::string &target);
    void takeDamage(unsigned int amount);
    void beRepaired(unsigned int amount);

    // Judge
    bool isInOperable(void) const;
    bool isDead(void) const;
    bool isNoEnergy(void) const;

    // Getter
    std::string getName(void) const;
    unsigned int getHitPoints(void) const;
    unsigned int getEnergyPoints(void) const;
    unsigned int getAttackDamage(void) const;
};

#endif