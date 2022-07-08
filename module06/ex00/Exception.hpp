/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Exception.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcha <mcha@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/08 22:28:13 by mcha              #+#    #+#             */
/*   Updated: 2022/07/08 22:30:24 by mcha             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EXCEPTION_HPP
#define EXCEPTION_HPP

#include <exception>

class Exception {
  public:
    // Check arguments number is two
    class NotValidArgumentsNumberException : public std::exception {
        virtual const char *what() const throw();
    };
};

#endif