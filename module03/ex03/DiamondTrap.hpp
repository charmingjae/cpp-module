/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcha <mcha@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/01 19:57:22 by mcha              #+#    #+#             */
/*   Updated: 2022/07/01 21:08:25 by mcha             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_HPP
#define DIAMONDTRAP_HPP

#include "FragTrap.hpp"
#include "ScavTrap.hpp"

class DiamondTrap : public FragTrap, public ScavTrap {
  private:
    std::string _name;

  public:
    DiamondTrap();
    DiamondTrap(std::string paramName);
    DiamondTrap(const DiamondTrap &diamondTrap);
    ~DiamondTrap();

    // Operator
    DiamondTrap &operator=(const DiamondTrap &diamondTrap);

    void whoAmI();
};

#endif