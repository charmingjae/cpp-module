/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcha <mcha@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/05 00:06:19 by mcha              #+#    #+#             */
/*   Updated: 2022/07/06 15:13:14 by mcha             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat() : WrongAnimal() {
    this->_type = "WrongCat";
    std::cout << "WrongCat default constructor is executed." << std::endl;
}

WrongCat::WrongCat(const WrongCat &paramWrongCat) : WrongAnimal() {
    *this = paramWrongCat;
    std::cout << "WrongCat copy constructor is executed." << std::endl;
}

WrongCat::~WrongCat() {
    std::cout << "WrongCat destructor is executed." << std::endl;
}

WrongCat &WrongCat::operator=(const WrongCat &paramWrongCat) {
    this->_type = paramWrongCat._type;
    std::cout << "WrongCat operator= is executed." << std::endl;
    return (*this);
}

void WrongCat::makeSound(void) const {
    std::cout << "WrongCat make sound. Meow~" << std::endl;
}