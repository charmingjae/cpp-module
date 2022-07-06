/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcha <mcha@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/04 20:58:25 by mcha              #+#    #+#             */
/*   Updated: 2022/07/06 15:15:51 by mcha             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP

#include <iostream>
#include <string>

class WrongAnimal {
  protected:
    std::string _type;

  public:
    WrongAnimal();
    WrongAnimal(const WrongAnimal &paramWrongAnimal);
    ~WrongAnimal();
    WrongAnimal &operator=(const WrongAnimal &paramWrongAnimal);

    void makeSound(void) const;
    std::string getType(void) const;
};

#endif