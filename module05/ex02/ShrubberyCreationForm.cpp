/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcha <mcha@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/07 16:16:39 by mcha              #+#    #+#             */
/*   Updated: 2022/07/07 17:29:55 by mcha             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"
#include "Bureaucrat.hpp"

ShrubberyCreationForm::ShrubberyCreationForm()
    : Form("ShrubberyCreationForm", 145, 137), _target("unknown") {
    std::cout << "ShrubberyCreationForm default constructor is executed."
              << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &src)
    : Form("ShrubberyCreationForm", 145, 137), _target(src._target) {
    *this = src;
    std::cout << "ShrubberyCreationForm copy constructor is executed."
              << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(const std::string &paramTarget)
    : Form("ShrubberyCreationForm", 145, 137), _target(paramTarget) {
    std::cout << "ShrubberyCreationForm constructor with target is executed."
              << std::endl;
}

ShrubberyCreationForm &
ShrubberyCreationForm::operator=(const ShrubberyCreationForm &rhs) {
    this->_target = rhs._target;
    std::cout << "ShrubberyCreationForm operator= is executed." << std::endl;
    return (*this);
}

ShrubberyCreationForm::~ShrubberyCreationForm() {
    std::cout << "ShrubberyCreationForm destructor is executed." << std::endl;
}

void ShrubberyCreationForm::execute(Bureaucrat const &executor) const {
    std::cout << "execute test :)" << std::endl;
}

std::string ShrubberyCreationForm::getTarget(void) const {
    return this->_target;
}

std::ostream &operator<<(std::ostream &os, const ShrubberyCreationForm &src) {
    os << src.getName() << ", form signed " << src.getSigned()
       << " , signGrade " << src.getSignGrade() << " , executeGrade "
       << src.getExecuteGrade() << " , target " << src.getTarget() << std::endl;
    return (os);
}