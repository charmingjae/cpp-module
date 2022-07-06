/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcha <mcha@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/06 16:08:46 by mcha              #+#    #+#             */
/*   Updated: 2022/07/06 22:17:50 by mcha             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

void test00(void) {
    // Create bureaucrat
    Bureaucrat *mcha = new Bureaucrat("mcha", 150);
    std::cout << "[INIT] " << *mcha << std::endl;

    // Create form
    Form *subject = new Form("subject", 149, 150);
    std::cout << "[INIT] " << *subject << std::endl;

    // Can't sign because grade gap
    subject->beSigned(*mcha);
    std::cout << *subject << std::endl;

    // Increase grade
    mcha->setIncreGrade();

    // Can sign
    subject->beSigned(*mcha);
    std::cout << *subject << std::endl;

    // Can't sign because form already signed
    subject->beSigned(*mcha);
    std::cout << *subject << std::endl;

    delete mcha;
    delete subject;
}

void test01(void) {
    // Create bureaucrat
    Bureaucrat *mcha = new Bureaucrat("mcha", 1);
    std::cout << "[INIT] " << *mcha << std::endl;

    // Create with copy constructor
    Bureaucrat copy(*mcha);
    std::cout << "[INIT] " << copy << std::endl;

    // Decrease copy's grade
    copy.setDecreGrade();
    std::cout << copy << std::endl;

    // Create form
    Form *form = new Form("math", 150, 150);
    std::cout << *form << std::endl;

    form->beSigned(copy);
    std::cout << *form << std::endl;

    Form fcpy(*form);
    std::cout << fcpy << std::endl;

    fcpy.beSigned(co)

        delete mcha;
    delete form;
}

int main(void) {
    try {
        std::cout << "\n=========== Scene 01 ===========\n";
        // test00();
        std::cout << "\n=========== Scene 02 ===========\n";
        test01();
        std::cout << "\n=========== Scene 03 ===========\n";
    } catch (std::exception &e) {
        std::cout << e.what() << std::endl;
    }
    return (1);
}