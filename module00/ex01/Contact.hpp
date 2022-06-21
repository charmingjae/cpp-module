/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcha <mcha@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/20 18:16:04 by mcha              #+#    #+#             */
/*   Updated: 2022/06/21 14:30:29 by mcha             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <string>

class Contact {
  private:
    std::string _firstName;
    std::string _lastName;
    std::string _nickName;
    std::string _phoneNumber;
    std::string _darkest;

  public:
    Contact();
    Contact(std::string paramFirstName, std::string paramLastName,
            std::string paramNickName, std::string paramPhoneNumber,
            std::string paramDarkest);
    std::string getFirstName(void);
    std::string getLastName(void);
    std::string getNickName(void);
    std::string getPhoneNumber(void);
    std::string getDarkest(void);
    std::string getLongerThanColumn(std::string param);
};

#endif