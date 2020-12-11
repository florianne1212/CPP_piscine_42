/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/05 11:58:20 by fcoudert          #+#    #+#             */
/*   Updated: 2020/12/07 08:23:51 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"


const char *TREES = ""
"                    *      \n"
"    *                      \n"
"           *               \n"
"       *      *        *   \n"    
"   *    *  ()   *   *      \n"
"*        * /\\         *   \n"
"      *   /i\\\\    *  *     \n"
"    *     o/\\\\  *      *   \n"
" *       ///*\\\\    *       \n"
"     *   /*/o\\\\  *    *    \n"
"   *    /i//\\o\\\\      *    \n"
"        /o/*\\\\i\\   *       \n"
"  *    //i//o\\\\*\\     *    \n"
"    * /*////\\o\\\\\\*        \n"
" *    //o//i\\*\\i\\\\   *    \n"
"   * /i///*/\\\\*\\\\\\   *   \n"
"  *    *   ||     * j      \n"
"                           \n"
"                           \n"
"                           \n"
"                           \n"
"                           \n"
"             *            \n"
"            /.\\          \n"
"           /..'\\         \n"
"           /'.'\\         \n"
"          /.''.'\\        \n"
"          /.'.'.\\        \n" 
"         /'.''.'.\\       \n"
"         ^^^[_]^^^        \n";


ShrubberyCreationForm::ShrubberyCreationForm()
{
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target):
Form("Shrubbery Creation Form", 145, 137),
_target(target)
{

}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const & copy): Form(copy)
{
    this->operator= (copy);
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
}

ShrubberyCreationForm & ShrubberyCreationForm::operator=(ShrubberyCreationForm const & ope)
{
    Form::operator= (ope);
    return(*this);
}

void ShrubberyCreationForm::execute_action()const
{
    std::string name = _target + "_shrubbery";
    const char * str_name = name.c_str();
    std::ofstream ofs(str_name);

    if(!(ofs))
    {
        std::cout << "error while trying to create the file" << std::endl ;
        return;
    }
    else
    {
        ofs << TREES;
    }
}