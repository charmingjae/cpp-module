/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcha <mcha@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/06 16:08:46 by mcha              #+#    #+#             */
/*   Updated: 2022/07/07 17:36:53 by mcha             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"

void test00(void) {
    std::cout << "\n	[ Paragraph 01 ]\n" << std::endl;
    ShrubberyCreationForm *test01 = new ShrubberyCreationForm();
    std::cout << "[INIT - Shrubbery] " << *test01 << std::endl;

    ShrubberyCreationForm cpy01(*test01);
    std::cout << "[COPY - Shrubbery] " << cpy01 << std::endl;

    std::cout << "\n	[ Paragraph 02 ]\n" << std::endl;
    ShrubberyCreationForm *test02 = new ShrubberyCreationForm("mcha");
    std::cout << "[INIT - Shrubbery] " << *test02 << std::endl;

    ShrubberyCreationForm cpy02(*test02);
    std::cout << "[COPY - Shrubbery] " << cpy02 << std::endl;

    std::cout << "\n	[ Paragraph 03 ]\n" << std::endl;
    ShrubberyCreationForm *test03 = new ShrubberyCreationForm("jule");
    std::cout << "[INIT - Shrubbery] " << *test03 << std::endl;

    ShrubberyCreationForm assg = *test03;
    std::cout << "[ASSG - Shrubbery] " << assg << std::endl;

    std::cout << "\n	[ Delete test01 ]" << std::endl;
    delete test01;
    std::cout << "\n	[ Delete test02 ]" << std::endl;
    delete test02;
    std::cout << "\n	[ Delete test03 ]" << std::endl;
    delete test03;
    std::cout << "\n	[ Delete stack area ]" << std::endl;
}

int main(void) {
    try {
        std::cout << "\n=========== Scene 01 ===========\n";
        test00();
        std::cout << "\n=========== Scene 02 ===========\n";
        // test01();
        std::cout << "\n=========== Scene 03 ===========\n";
        // test02();
    } catch (std::exception &e) {
        std::cout << e.what() << std::endl;
    }
    return (1);
}