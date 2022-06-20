/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   InputView.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcha <mcha@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/20 20:27:55 by mcha              #+#    #+#             */
/*   Updated: 2022/06/20 22:36:34 by mcha             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INPUTVIEW_HPP
#define INPUTVIEW_HPP

#include <iostream>
#include <string>

class InputView {
  public:
    int getCommands(std::string &paramCommand);
    int getContactArgument(std::string (&arr)[5]);
    void getContactInputType(int paramType);
};

#endif