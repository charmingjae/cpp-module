/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   OutputView.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcha <mcha@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/20 20:19:49 by mcha              #+#    #+#             */
/*   Updated: 2022/06/21 14:36:10 by mcha             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef VIEW_HPP
#define VIEW_HPP

#include "Contact.hpp"
#include <iomanip>
#include <iostream>
#include <string>

class OutputView {
  public:
    void showColumn(void);
    void showContact(Contact paramContact);
    void showEmptyPhoneBook(void);
    void showCannotFoundContact(void);
};

#endif