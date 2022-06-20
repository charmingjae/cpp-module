/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Controller.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcha <mcha@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/20 20:34:11 by mcha              #+#    #+#             */
/*   Updated: 2022/06/20 22:02:25 by mcha             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTROLLER_HPP
#define CONTROLLER_HPP

#include "InputView.hpp"
#include "OutputView.hpp"
#include "PhoneBook.hpp"

#define NOT_VALID_CMD "IT IS NOT A VLID COMMAND. TRY AGAIN"

class Controller {
  private:
    std::string _cmd;
    InputView _inputView;
    PhoneBook _phoneBook;

  public:
    Controller();
    void process(void);
    void setCommand(std::string paramCommand);
    std::string getCommand(void);
    int isMatchCommand(std::string paramCommand);
    int isCommandNotEof(int paramResult);
    int processCommand(std::string paramCommand);
    int isCommandAdd(std::string paramCommand);
    int isCommandExit(std::string paramCommand);
    int isCommandSearch(std::string paramCommand);
};

#endif