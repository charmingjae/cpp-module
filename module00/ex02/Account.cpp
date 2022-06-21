/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcha <mcha@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/21 21:46:49 by mcha              #+#    #+#             */
/*   Updated: 2022/06/21 22:03:05 by mcha             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include <ctime>
#include <string>

std::string getCurrentTimestamp(void) {
    time_t t = time(NULL);
    struct tm *tstruct = localtime(&t);
    char buf[16];
    strftime(buf, sizeof(buf), "%Y%m")
}

void Account::_displayTimestamp(void) {}