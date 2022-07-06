/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcha <mcha@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/04 21:14:36 by mcha              #+#    #+#             */
/*   Updated: 2022/07/06 15:12:08 by mcha             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

// The type of the WrongAnimal class can be left empty or set to the value of
// your choice.
WrongAnimal::WrongAnimal() : _type("") {
    std::cout << "WrongAnimal default constructor is executed." << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &paramWrongAnimal) {
    *this = paramWrongAnimal;
    std::cout << "WrongAnimal copy constructor is executed." << std::endl;
}

WrongAnimal::~WrongAnimal() {
    std::cout << "WrongAnimal destructor is executed." << std::endl;
}

WrongAnimal &WrongAnimal::operator=(const WrongAnimal &paramWrongAnimal) {
    this->_type = paramWrongAnimal._type;
    std::cout << "WrongAnimal operator= is executed." << std::endl;
    return (*this);
}

void WrongAnimal::makeSound(void) const {
    std::cout << "WrongAnimal make sound. (?)" << std::endl;
}

std::string WrongAnimal::getType(void) const { return this->_type; }