/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcoudert <fcoudert@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/05 09:38:18 by fcoudert          #+#    #+#             */
/*   Updated: 2020/12/06 12:41:48 by fcoudert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "PresidentialPardonForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "Intern.hpp"

int main ()
{
    std::cout << "\n---- ex03 ----\n" << std::endl;

    Intern  someRandomIntern;
    Form*   rrf;
    Form*   fail;
    Form*   president;
    Form*   Shrub;
    
    rrf = someRandomIntern.makeForm("robotomy request", "Bender");
    std::cout << *rrf << std::endl;

    fail = someRandomIntern.makeForm("lol", "Bender");

    president = someRandomIntern.makeForm("presidential pardon", "Bender");
    std::cout << *president << std::endl;

    Shrub = someRandomIntern.makeForm("shrubbery creation", "Bender");
    std::cout << *Shrub << std::endl;
}