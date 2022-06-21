/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Controller.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcha <mcha@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/20 20:36:04 by mcha              #+#    #+#             */
/*   Updated: 2022/06/21 14:37:48 by mcha             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Controller.hpp"

Controller::Controller() {}

void Controller::process(void) {
    std::string cmd;

    while (42) {
        std::cout << " $ ";
        if (isCommandNotEof(_inputView.getCommands(cmd)))
            break;
        if (isMatchCommand(cmd)) {
            if (!processCommand(cmd))
                break;
        }
    }
}

int Controller::isMatchCommand(std::string paramCommand) {
    if (isCommandAdd(paramCommand)) {
        return (1);
    } else if (isCommandSearch(paramCommand)) {
        return (1);
    } else if (isCommandExit(paramCommand)) {
        return (1);
    }
    if (paramCommand.length() != 0)
        std::cout << NOT_VALID_CMD << std::endl;
    return (0);
}

int Controller::processCommand(std::string paramCommand) {
    if (isCommandAdd(paramCommand)) {
        std::string arr[5];

        if (_inputView.getContactArgument(arr) != 0) {
            Contact contact(arr[0], arr[1], arr[2], arr[3], arr[4]);
            _phoneBook.addContact(contact);
        } else
            return (0);
    } else if (isCommandSearch(paramCommand)) {
        if (findPhoneBookIndex(_inputView.getSearchIndex()) == 10) {
            std::cout << "EOF" << std::endl;
            return (0);
        }
    } else if (isCommandExit(paramCommand)) {
        // proc
    }
    return (1);
}

int Controller::findPhoneBookIndex(unsigned int index) {
    if (index == 0) {
        if (_phoneBook.getPhoneBookComponent(0).getFirstName().length() > 0) {
            _outputView.showColumn();
            for (int i = 0; i < 8; i++) {
                if (_phoneBook.getPhoneBookComponent(i)
                        .getFirstName()
                        .length() > 0) {

                    std::cout << " | " << std::setw(10) << i;
                    _outputView.showContact(
                        _phoneBook.getPhoneBookComponent(i));
                }
            }
        } else {
            _outputView.showEmptyPhoneBook();
        }
        return (1);
    }
    if (index == 10) {
        return (10);
    }
    if (_phoneBook.getPhoneBookComponent(0).getFirstName().length() > 0) {
        _outputView.showColumn();
        std::cout << index << "	";
        _outputView.showContact(_phoneBook.getPhoneBookComponent(index - 1));
        return (1);
    } else {
        _outputView.showCannotFoundContact();
    }
    return (1);
}
int Controller::isCommandNotEof(int paramResult) { return paramResult == 0; }
int Controller::isCommandAdd(std::string paramCommand) {
    return paramCommand.compare("ADD") == 0;
}
int Controller::isCommandSearch(std::string paramCommand) {
    return paramCommand.compare("SEARCH") == 0;
}
int Controller::isCommandExit(std::string paramCommand) {
    return paramCommand.compare("EXIT") == 0;
}