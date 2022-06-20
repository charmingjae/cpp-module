/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcha <mcha@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/20 18:00:56 by mcha              #+#    #+#             */
/*   Updated: 2022/06/20 23:00:15 by mcha             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook() { _idx = 0; }

int PhoneBook::addContact(Contact paramContact) {
    _phoneBook[getNowIdx() % 8] = paramContact;
    PhoneBook::getContact(getNowIdx() % 8);
    setIdx();
    return (1);
}
Contact PhoneBook::getPhoneBookComponent(unsigned int idx) const {
    return _phoneBook[idx - 1];
}
unsigned int PhoneBook::getNowIdx(void) const { return _idx; }
void PhoneBook::setIdx(void) { _idx++; }
void PhoneBook::getContact(unsigned int paramIdx) {
    std::cout << paramIdx << " " << _phoneBook[paramIdx].getFirstName() << " "
              << _phoneBook[paramIdx].getLastName() << " "
              << _phoneBook[paramIdx].getNickName() << " "
              << _phoneBook[paramIdx].getPhoneNumber() << " "
              << _phoneBook[paramIdx].getDarkest() << std::endl;
}