/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcha <mcha@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/06 16:08:46 by mcha              #+#    #+#             */
/*   Updated: 2022/07/06 21:02:30 by mcha             ###   ########.fr       */
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

    subject->beSigned(*mcha);
    std::cout << *subject << std::endl;
}

int main(void) {
    try {
        std::cout << "\n=========== Scene 01 ===========\n";
        test00();
        std::cout << "\n=========== Scene 02 ===========\n";
        std::cout << "\n=========== Scene 03 ===========\n";
    } catch (std::exception &e) {
        std::cout << e.what() << std::endl;
    }
    return (1);
}