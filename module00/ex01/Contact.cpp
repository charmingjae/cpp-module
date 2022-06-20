/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcha <mcha@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/20 19:52:39 by mcha              #+#    #+#             */
/*   Updated: 2022/06/20 21:58:17 by mcha             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact(void){};
Contact::Contact(std::string paramFirstName, std::string paramLastName,
                 std::string paramNickName, std::string paramPhoneNumber,
                 std::string paramDarkest)
    : _firstName(paramFirstName), _lastName(paramLastName),
      _nickName(paramNickName), _phoneNumber(paramPhoneNumber),
      _darkest(paramDarkest) {}

std::string Contact::getFirstName(void) { return _firstName; }
std::string Contact::getLastName(void) { return _lastName; }
std::string Contact::getNickName(void) { return _nickName; }
std::string Contact::getPhoneNumber(void) { return _phoneNumber; }
std::string Contact::getDarkest(void) { return _darkest; }