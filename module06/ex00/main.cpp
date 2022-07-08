/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcha <mcha@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/08 22:27:24 by mcha              #+#    #+#             */
/*   Updated: 2022/07/08 22:32:24 by mcha             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Exception.hpp"

int main(int ac, char **av) {
    try {
        if (ac != 2) {
            throw Exception::NotValidArgumentsNumberException();
        }
    } catch (std::exception &e) {
        std::cout << e.what() << std::endl;
    }
    return (0);
}