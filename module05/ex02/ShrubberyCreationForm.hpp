/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcha <mcha@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/07 16:15:39 by mcha              #+#    #+#             */
/*   Updated: 2022/07/07 17:14:54 by mcha             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_HPP
#define SHRUBBERYCREATIONFORM_HPP

#include "Form.hpp"
#include <iostream>
#include <string>

class Bureaucrat;

class ShrubberyCreationForm : public Form {
  private:
    std::string _target;

  public:
    ShrubberyCreationForm();
    ShrubberyCreationForm(const ShrubberyCreationForm &src);
    ShrubberyCreationForm(const std::string &paramTarget);
    ~ShrubberyCreationForm();

    ShrubberyCreationForm &operator=(const ShrubberyCreationForm &rhs);

    void execute(Bureaucrat const &executor) const;

    std::string getTarget(void) const;
};

std::ostream &operator<<(std::ostream &os, const ShrubberyCreationForm &src);

#endif