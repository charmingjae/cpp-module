/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcha <mcha@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/04 20:58:15 by mcha              #+#    #+#             */
/*   Updated: 2022/07/06 15:16:03 by mcha             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

void test00() {
    // Animal
    Animal *animal = new Animal();
    std::cout << "Animal type : " << animal->getType() << std::endl;
    animal->makeSound();
    std::cout << std::endl;

    // Cat
    Cat *cat = new Cat();
    std::cout << "Cat type : " << cat->getType() << std::endl;
    cat->makeSound();
    std::cout << std::endl;

    // Dog
    Dog *dog = new Dog();
    std::cout << "Dog type : " << dog->getType() << std::endl;
    dog->makeSound();
    std::cout << std::endl;

    delete animal;
    delete cat;
    delete dog;
}

void test01() {
    const Animal *meta = new Animal();
    const Animal *j = new Dog();
    const Animal *i = new Cat();
    std::cout << j->getType() << " " << std::endl;
    std::cout << i->getType() << " " << std::endl;
    i->makeSound(); // will output the cat sound!
    j->makeSound();
    meta->makeSound();
}

void test02() {
    WrongAnimal *wrong = new WrongCat();
    wrong->makeSound();
    delete wrong;
}

int main(void) {
    std::cout << "====================== Scene 01 ======================"
              << std::endl;
    test00();
    std::cout << "\n====================== Scene 02 ======================"
              << std::endl;
    test01();
    std::cout << "\n====================== Scene 03 ======================"
              << std::endl;
    test02();
    // system("leaks ex00");
    return (1);
}