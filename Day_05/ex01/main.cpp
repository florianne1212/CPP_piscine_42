/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcoudert <fcoudert@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/05 09:38:18 by fcoudert          #+#    #+#             */
/*   Updated: 2020/12/05 09:38:34 by fcoudert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main ()
{
    std::cout << "\n---- ex01 ----\n" << std::endl;

    Bureaucrat Marge("Marge", 3);
    std::cout << Marge;
    Form form_1("formulaire 1", 3, 2);
    std::cout << form_1;
    Marge.signForm(form_1);
    std::cout << form_1 << std::endl;
    
    Form form_2("formulaire 2", 1 , 2);
    std::cout << form_2;
    Marge.signForm(form_2);
    std::cout << form_2 << std::endl;

    Marge.signForm(form_1);
}