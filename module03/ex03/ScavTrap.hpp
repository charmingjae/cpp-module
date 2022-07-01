/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcha <mcha@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/01 16:14:00 by mcha              #+#    #+#             */
/*   Updated: 2022/07/01 20:52:34 by mcha             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap : virtual public ClapTrap {
  public:
    ScavTrap();
    ScavTrap(std::string paramName);
    ScavTrap(const ScavTrap &scavTrap);
    ~ScavTrap();

    // Operator
    ScavTrap &operator=(const ScavTrap &scavTrap);

    void attack(const std::string &target);
    void guardGate(void);
};

#endif