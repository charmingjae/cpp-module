/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcha <mcha@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/20 19:52:39 by mcha              #+#    #+#             */
/*   Updated: 2022/06/21 14:42:15 by mcha             ###   ########.fr       */
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

std::string Contact::getFirstName(void) {
    if (_firstName.length() > 10)
        return getLongerThanColumn(_firstName);
    return _firstName;
}
std::string Contact::getLastName(void) {
    if (_lastName.length() > 10)
        return getLongerThanColumn(_lastName);
    return _lastName;
}
std::string Contact::getNickName(void) {
    if (_nickName.length() > 10)
        return getLongerThanColumn(_nickName);
    return _nickName;
}
std::string Contact::getPhoneNumber(void) { return _phoneNumber; }
std::string Contact::getDarkest(void) { return _darkest; }
std::string Contact::getLongerThanColumn(std::string param) {
    param = param.substr(0, 10);
    param = param.replace(9, 1, ".");
    return (param);
}