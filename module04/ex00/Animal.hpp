/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcha <mcha@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/04 20:58:25 by mcha              #+#    #+#             */
/*   Updated: 2022/07/04 22:01:37 by mcha             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>
#include <string>

class Animal {
  protected:
    std::string _type;

  public:
    Animal();
    Animal(const Animal &paramAnimal);
    ~Animal();
    Animal &operator=(const Animal &paramAnimal);
};

#endif