/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   OutputView.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcha <mcha@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/20 20:19:49 by mcha              #+#    #+#             */
/*   Updated: 2022/06/20 20:27:19 by mcha             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef VIEW_HPP
#define VIEW_HPP

#include <iostream>
#include <string>

class View {
  public:
    View();
    void isNotCommandType(std::string paramCommand);
};

#endif