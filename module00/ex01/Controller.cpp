/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Controller.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcha <mcha@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/20 20:36:04 by mcha              #+#    #+#             */
/*   Updated: 2022/06/20 22:43:06 by mcha             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Controller.hpp"
#include "InputView.hpp"
#include "OutputView.hpp"

Controller::Controller() {}

void Controller::process(void) {
    std::string cmd;

    while (42) {
        if (isCommandNotEof(_inputView.getCommands(cmd)))
            break;
        if (isMatchCommand(cmd)) {
            setCommand(cmd);
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
        // _phoneBook.addContact()
    } else if (isCommandSearch(paramCommand)) {
        // proc
    } else if (isCommandExit(paramCommand)) {
        // proc
    }
    return (1);
}

std::string Controller::getCommand(void) { return _cmd; }
void Controller::setCommand(std::string paramCommand) { _cmd = paramCommand; }
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