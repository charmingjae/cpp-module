/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   OutputView.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcha <mcha@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/21 15:41:03 by mcha              #+#    #+#             */
/*   Updated: 2022/06/21 20:40:24 by mcha             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "OutputView.hpp"

OutputView::OutputView() {}

void OutputView::showAllContacts(Contact *paramPhoneBook) {
    showPhoneBookColumn();
    for (int i = 0; i < 8; i++) {
        if (!paramPhoneBook[i].getFirstName().empty()) {
            std::cout << " | " << std::setw(10) << i << " | " << std::setw(10)
                      << paramPhoneBook[i].getFirstName() << " | "
                      << std::setw(10) << paramPhoneBook[i].getLastName()
                      << " | " << std::setw(10)
                      << paramPhoneBook[i].getNickName() << " | " << std::endl;
        }
    }
}

void OutputView::showSpecContact(Contact paramContact, int paramIndex) {
    showPhoneBookAllColumn();
    std::cout << " | " << std::setw(10) << paramIndex << " | " << std::setw(10)
              << paramContact.getFirstName() << " | " << std::setw(10)
              << paramContact.getLastName() << " | " << std::setw(10)
              << paramContact.getNickName() << " | " << std::setw(10)
              << paramContact.getPhoneNumber() << " | " << std::setw(10)
              << paramContact.getDarkestSecret() << " | " << std::endl;
}

void OutputView::showSpecContactEmpty(int paramIndex) {
    std::cout << paramIndex << " contact is empty" << std::endl;
}

void OutputView::showNotValidIndexRange(void) {
    std::cout << "Not valid index range. Try again" << std::endl;
}

void OutputView::showSearchPrompt(void) { std::cout << " >> "; }

void OutputView::showPhoneBookEmpty(void) {
    std::cout << "PhoneBook is now empty" << std::endl;
}

void OutputView::showAlertEmptySearchindex(void) {
    std::cout << "Cannot input empty search index. Try again" << std::endl;
}

void OutputView::showPrompt(void) { std::cout << " $ "; }

void OutputView::showPhoneBookAllColumn(void) {
    std::cout << " | " << std::setw(10) << "INDEX"
              << " | " << std::setw(10) << "FIRST NAME"
              << " | " << std::setw(10) << "LAST NAME"
              << " | " << std::setw(10) << "NICK NAME"
              << " | " << std::setw(10) << "PHONE NBR."
              << " | " << std::setw(10) << "DARK. SEC."
              << " | " << std::endl;
}

void OutputView::showPhoneBookColumn(void) {
    std::cout << " | " << std::setw(10) << "INDEX"
              << " | " << std::setw(10) << "FIRST NAME"
              << " | " << std::setw(10) << "LAST NAME"
              << " | " << std::setw(10) << "NICK NAME"
              << " | " << std::endl;
}

void OutputView::showCommandEOF(void) {
    std::cout << std::endl;
    std::cout << "EOF" << std::endl;
}

void OutputView::showWhenEnterFirstName(void) {
    std::cout << std::setw(20) << "FIRST NAME : ";
}

void OutputView::showWhenEnterLastName(void) {
    std::cout << std::setw(20) << "LAST NAME : ";
}

void OutputView::showWhenEnterNickName(void) {
    std::cout << std::setw(20) << "NICK NAME : ";
}

void OutputView::showWhenEnterPhoneNumber(void) {
    std::cout << std::setw(20) << "PHONE NUMBER : ";
}

void OutputView::showWhenEnterDarkestSecret(void) {
    std::cout << std::setw(20) << "DARKEST SECRET : ";
}

void OutputView::showContactComponentNotValid(void) {
    std::cout << "Entered contact component is not valid. Try again"
              << std::endl;
}

void OutputView::showGoodBye(void) {
    std::cout << std::endl;
    std::cout << "Good Bye" << std::endl;
}