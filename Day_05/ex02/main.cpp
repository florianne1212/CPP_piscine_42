/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcoudert <fcoudert@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/05 09:38:18 by fcoudert          #+#    #+#             */
/*   Updated: 2020/12/05 14:33:02 by fcoudert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "PresidentialPardonForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"

int main ()
{
    std::cout << "\n---- ex02 ----\n" << std::endl;

    Bureaucrat Marge("Marge", 3);
    Bureaucrat Homer("Homer", 6);
    std::cout << Marge;
    ShrubberyCreationForm Shrub("Shrub");
    std::cout << Shrub;
    Marge.executeForm(Shrub);
    Shrub.execute(Marge);
    Marge.signForm(Shrub);
    std::cout << Shrub << std::endl;
    Marge.executeForm(Shrub);
    std::cout << "\n";
    
    PresidentialPardonForm President("President");
    std::cout << President;
    Homer.signForm(President);
    Homer.executeForm(President);
    President.execute(Homer);
    Marge.executeForm(President);

    std::cout << "\n";

    RobotomyRequestForm Robot("Robot");
    std::cout << Robot;
    Homer.signForm(Robot);
    Marge.executeForm(Robot);
    Marge.executeForm(Robot);
}