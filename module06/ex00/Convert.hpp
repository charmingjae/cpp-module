/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Convert.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcha <mcha@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/09 00:20:57 by mcha              #+#    #+#             */
/*   Updated: 2022/07/09 21:31:12 by mcha             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONVERT_HPP
#define CONVERT_HPP

#include "Exception.hpp"
#include <errno.h>
#include <float.h>
#include <limits>
#include <math.h>
#include <sstream>
#include <stdlib.h>
#include <string>

class Convert {
  private:
    const double _value;
    const char *_input;
    char *_ptr;

    Convert();
    Convert(const Convert &src);
    Convert &operator=(const Convert &src);

  public:
    Convert(const char *paramValue);
    ~Convert();
    void process(void) const;
    void printChar(double param) const;
    void printInt(double param) const;
    void printFloat(double param) const;
    void printDouble(double param) const;
    void printNaN(void) const;
    void printConvert(void) const;
};

#endif