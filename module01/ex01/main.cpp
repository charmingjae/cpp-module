/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcha <mcha@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/22 21:24:05 by mcha              #+#    #+#             */
/*   Updated: 2022/06/24 17:51:46 by mcha             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void) {
    int n = 2;
    if (n >= 0) {
        Zombie *zombie = zombieHorde(n, "mcha");

        for (int i = 0; i < n; i++) {
            std::cout << zombie[i].getName() << std::endl;
        }
        delete[] zombie;
    }
    return (1);
}