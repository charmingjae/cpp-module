/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   InputView.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcha <mcha@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/20 20:29:52 by mcha              #+#    #+#             */
/*   Updated: 2022/06/20 22:39:27 by mcha             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "InputView.hpp"

int InputView::getCommands(std::string &paramCommand) {
    if (!std::getline(std::cin, paramCommand)) {
        std::cout << "End Of PhoneBook" << std::endl;
        return (0);
    }
    return (1);
}

int InputView::getContactArgument(std::string (&arr)[5]) {
    for (int i = 0; i < 5; i++) {
        std::string input;
        InputView::getContactInputType(i);
        if (!std::getline(std::cin, input)) {
            std::cout << "EOF" << std::endl;
            return (0);
        } else if (input.length() != 0) {
            arr[i] = input;
        } else if (input.length() == 0) {
            std::cout << "Cannot input empty line. Try again :)" << std::endl;
            i--;
            continue;
        }
    }
    return (1);
}

void InputView::getContactInputType(int paramType) {
    if (paramType == 0)
        std::cout << "First Name : ";
    else if (paramType == 1)
        std::cout << "Last Name : ";
    else if (paramType == 2)
        std::cout << "Nick Name : ";
    else if (paramType == 3)
        std::cout << "Phone Number : ";
    else if (paramType == 4)
        std::cout << "Darkest secret : ";
}