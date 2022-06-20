/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcha <mcha@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/20 17:53:47 by mcha              #+#    #+#             */
/*   Updated: 2022/06/20 22:56:16 by mcha             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include "Contact.hpp"
#include <iostream>

class PhoneBook {
  private:
    unsigned int _idx;
    Contact _phoneBook[8];

  public:
    PhoneBook();
    unsigned int getNowIdx(void) const;
    void setIdx(void);
    Contact getPhoneBookComponent(unsigned int idx) const;
    int addContact(Contact paramContact);
    void getContact(unsigned int paramIdx);
};

#endif