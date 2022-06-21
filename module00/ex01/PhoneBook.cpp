/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcha <mcha@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/20 18:00:56 by mcha              #+#    #+#             */
/*   Updated: 2022/06/21 14:16:13 by mcha             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook() { _idx = 0; }

void PhoneBook::addContact(Contact paramContact) {
    _phoneBook[getNowIdx() % 8] = paramContact;
    setIdx();
}
Contact PhoneBook::getPhoneBookComponent(unsigned int idx) const {
    return _phoneBook[idx];
}
unsigned int PhoneBook::getNowIdx(void) const { return _idx; }
void PhoneBook::setIdx(void) { _idx++; }