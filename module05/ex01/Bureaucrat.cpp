/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcha <mcha@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/06 15:46:21 by mcha              #+#    #+#             */
/*   Updated: 2022/07/06 21:09:38 by mcha             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

// Default constructor
// - set name as empty
// - set grade as lowest
Bureaucrat::Bureaucrat() : _name(""), _grade(150) {
    if (this->_grade < 1)
        throw Bureaucrat::GradeTooHighException();
    else if (this->_grade > 150)
        throw Bureaucrat::GradeTooLowException();
}

// Copy constructor
Bureaucrat::Bureaucrat(const Bureaucrat &src) : _name(src._name) {
    *this = src;
}

// Constructor with parameter
Bureaucrat::Bureaucrat(const std::string &paramName, int paramGrade)
    : _name(paramName) {
    if (paramGrade < 1)
        throw Bureaucrat::GradeTooHighException();
    else if (paramGrade > 150)
        throw Bureaucrat::GradeTooLowException();
    this->_grade = paramGrade;
}

// Destructor
Bureaucrat::~Bureaucrat() {}

// Operator= overloading
Bureaucrat &Bureaucrat::operator=(const Bureaucrat &rhs) {
    if (rhs.getGrade() > 150)
        throw Bureaucrat::GradeTooLowException();
    else if (rhs.getGrade() < 1)
        throw Bureaucrat::GradeTooHighException();
    this->_grade = rhs.getGrade();
    return (*this);
}

// return this name
std::string Bureaucrat::getName(void) const { return this->_name; }

// return this grade
int Bureaucrat::getGrade(void) const { return this->_grade; }

// Increase this grade with paramGrade
// -1
void Bureaucrat::setIncreGrade(void) {
    if (this->getGrade() <= 1)
        throw Bureaucrat::GradeTooHighException();
    else if (this->getGrade() > 150)
        throw Bureaucrat::GradeTooLowException();
    this->_grade -= 1;
}

// Decrease this grade with paramGrade
// +1
void Bureaucrat::setDecreGrade(void) {
    if (this->getGrade() < 1)
        throw Bureaucrat::GradeTooHighException();
    else if (this->getGrade() >= 150)
        throw Bureaucrat::GradeTooLowException();
    this->_grade += 1;
}

// Exception
const char *Bureaucrat::GradeTooHighException::what() const throw() {
    return "[Exception - Bureaucrat] Grade is too high.";
}

const char *Bureaucrat::GradeTooLowException::what() const throw() {
    return "[Exception - Bureaucrat] Grade is too low.";
}

void Bureaucrat::signForm(const Form &src, unsigned int type) const {
    std::cout << "inner" << std::endl;
    if (type == 0) {
        std::cout << this->getName() << " signed " << src.getName()
                  << std::endl;
    } else if (type == 1) {
        std::cout << this->getName() << " couldn't sign " << src.getName()
                  << " because form already signed" << std::endl;
    } else if (type == 2) {
        std::cout << this->getName() << " couldn't sign " << src.getName()
                  << " because grade gap is too big" << std::endl;
    } else {
        std::cout << this->getName() << " couldn't sign " << src.getName()
                  << " because unknown reason" << std::endl;
    }
}

std::ostream &operator<<(std::ostream &os, const Bureaucrat &src) {
    os << src.getName() << ", bureaucrat grade " << src.getGrade() << "."
       << std::endl;
    return (os);
}