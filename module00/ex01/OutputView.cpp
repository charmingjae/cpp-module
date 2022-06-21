/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   OutputView.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcha <mcha@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/20 20:21:47 by mcha              #+#    #+#             */
/*   Updated: 2022/06/21 14:36:14 by mcha             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "OutputView.hpp"

void OutputView::showColumn(void) {
    std::cout << " | " << std::setw(10) << "INDEX"
              << " | " << std::setw(10) << "FIRST NAME"
              << " | " << std::setw(10) << "LAST NAME"
              << " | " << std::setw(10) << "NICKNAME"
              << " | " << std::setw(10) << "PHONE NUMBER"
              << " | " << std::setw(10) << "DARKEST"
              << " | " << std::endl;
}

void OutputView::showContact(Contact paramContact) {
    std::cout << " | " << std::setw(10) << paramContact.getFirstName() << " | "
              << std::setw(10) << paramContact.getLastName() << " | "
              << std::setw(10) << paramContact.getNickName() << " | "
              << std::setw(10) << paramContact.getPhoneNumber() << " | "
              << std::setw(10) << paramContact.getDarkest() << " | "
              << std::endl;
}

void OutputView::showEmptyPhoneBook(void) {
    std::cout << "PhoneBook is empty" << std::endl;
}

void OutputView::showCannotFoundContact(void) {
    std::cout << "Cannot found such contact" << std::endl;
}