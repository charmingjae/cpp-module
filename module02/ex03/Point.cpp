/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcha <mcha@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/27 21:17:26 by mcha              #+#    #+#             */
/*   Updated: 2022/06/27 21:55:59 by mcha             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point() : _x(0), _y(0) {}

Point::Point(const Point &point) { *this = point; }

Point::Point(const float num1, const float num2) : _x(num1), _y(num2) {}

Point::Point(const int num1, const int num2) : _x(num1), _y(num2) {}

Point::~Point() {}

Point &Point::operator=(const Point &point) {
    (Fixed) this->_x = point.getConstX();
    (Fixed) this->_y = point.getConstY();
    return *this;
}

Fixed const Point::getConstX(void) const { return this->_x; }
Fixed const Point::getConstY(void) const { return this->_y; }

std::ostream &operator<<(std::ostream &os, const Point &point) {
    os << " [ " << point.getConstX() << " , " << point.getConstY() << " ] ";
    return os;
}