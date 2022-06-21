/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcha <mcha@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/21 16:19:18 by mcha              #+#    #+#             */
/*   Updated: 2022/06/21 21:01:37 by mcha             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact() {}

Contact::Contact(std::string paramFstName, std::string paramLstName,
                 std::string paramNickName, std::string paramPhnNbr,
                 std::string paramDkstSecret)
    : _firstName(paramFstName), _lastName(paramLstName),
      _nickName(paramNickName), _phoneNumber(paramPhnNbr),
      _darkestSecret(paramDkstSecret) {}

std::string Contact::manufactLongString(std::string paramString) {
    if (paramString.length() > 10) {
        paramString = paramString.substr(0, 10);
        paramString = paramString.replace(9, 1, ".");
    }
    return (paramString);
}
std::string Contact::getFirstName(void) {
    return manufactLongString(_firstName);
}
std::string Contact::getLastName(void) { return manufactLongString(_lastName); }
std::string Contact::getNickName(void) { return manufactLongString(_nickName); }
std::string Contact::getPhoneNumber(void) {
    return manufactLongString(_phoneNumber);
}
std::string Contact::getDarkestSecret(void) {
    return manufactLongString(_darkestSecret);
}