/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcha <mcha@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/04 21:00:36 by mcha              #+#    #+#             */
/*   Updated: 2022/07/06 15:12:48 by mcha             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_HPP
#define WRONGCAT_HPP

#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal {
  public:
    WrongCat();
    WrongCat(const WrongCat &paramWrongCat);
    ~WrongCat();
    WrongCat &operator=(const WrongCat &paramWrongCat);

    void makeSound(void) const;
};

#endif