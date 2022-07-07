/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcha <mcha@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/07 16:44:48 by mcha              #+#    #+#             */
/*   Updated: 2022/07/07 16:44:49 by mcha             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"
#include "Bureaucrat.hpp"

Form::Form() : _name(""), _signed(false), _signGrade(150), _executeGrade(150) {
    if (this->_signGrade > 150 || this->_executeGrade > 150)
        throw Form::GradeTooLowException();
    else if (this->_signGrade < 1 || this->_executeGrade < 1)
        throw Form::GradeTooHighException();
    std::cout << "Form default constructor is executed." << std::endl;
}

Form::Form(const Form &src)
    : _name(src._name), _signGrade(src._signGrade),
      _executeGrade(src._executeGrade) {
    *this = src;
    std::cout << "Form copy constructor is executed." << std::endl;
}

Form::Form(const std::string &paramName, const int paramSignGrade,
           const int paramExecuteGrade)
    : _name(paramName), _signed(false), _signGrade(paramSignGrade),
      _executeGrade(paramExecuteGrade) {
    if (this->_signGrade > 150 || this->_executeGrade > 150)
        throw Form::GradeTooLowException();
    else if (this->_signGrade < 1 || this->_executeGrade < 1)
        throw Form::GradeTooHighException();
    std::cout << "Form constructor with parameter is executed." << std::endl;
}

Form &Form::operator=(const Form &rhs) {
    if (rhs.getSignGrade() > 150 || rhs.getExecuteGrade() > 150)
        throw Form::GradeTooLowException();
    else if (rhs.getSignGrade() < 1 || rhs.getExecuteGrade() < 1)
        throw Form::GradeTooHighException();
    this->_signed = rhs.getSigned();
    std::cout << "Form operator= is executed." << std::endl;
    return (*this);
}

Form::~Form() { std::cout << "Form destructor is executed." << std::endl; }

std::string Form::getName(void) const { return this->_name; }

bool Form::getSigned(void) const { return this->_signed; }

int Form::getSignGrade(void) const { return this->_signGrade; }

int Form::getExecuteGrade(void) const { return this->_executeGrade; }

void Form::beSigned(const Bureaucrat &src) {
    // check this range
    if (this->_signGrade > 150 || this->_executeGrade > 150)
        throw Form::GradeTooLowException();
    else if (this->_signGrade < 1 || this->_executeGrade < 1)
        throw Form::GradeTooHighException();
    // check src range
    if (src.getGrade() > 150)
        throw Bureaucrat::GradeTooLowException();
    else if (src.getGrade() < 1)
        throw Bureaucrat::GradeTooHighException();
    // Compare grade and do sign
    if (this->getSignGrade() >= src.getGrade()) {
        if (this->getSigned() == true) {
            src.signForm(*this, 1);
            return;
        } else {
            src.signForm(*this, 0);
            this->_signed = true;
            return;
        }
    } else if (this->getSignGrade() < src.getGrade()) {
        src.signForm(*this, 2);
        return;
    }
    src.signForm(*this, 3);
}

// Exception
const char *Form::GradeTooHighException::what() const throw() {
    return "[Exception - Form] Grade is too high.";
}

const char *Form::GradeTooLowException::what() const throw() {
    return "[Exception - Form] Grade is too low.";
}

std::ostream &operator<<(std::ostream &os, const Form &src) {
    os << src.getName() << ", form signed " << src.getSigned()
       << " , signGrade " << src.getSignGrade() << " , executeGrade "
       << src.getExecuteGrade() << std::endl;
    return (os);
}