/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youjeon <youjeon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/25 17:45:01 by youjeon           #+#    #+#             */
/*   Updated: 2022/08/25 20:57:38 by youjeon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm& obj) : Form(obj)
{
}

ShrubberyCreationForm& ShrubberyCreationForm::operator=(const ShrubberyCreationForm& obj)
{
	this->setSigned(obj.getSigned());
	this->setName(obj.getName());
	return (*this);
}

ShrubberyCreationForm::~ShrubberyCreationForm(void)
{
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : Form(target, 145, 137)
{
}

void ShrubberyCreationForm::execute(const Bureaucrat& b) const
{
	checkExec(b);
	std::ofstream ofs;
	std::string outfile;

	outfile = getName();
	outfile.append("_shrubbery "); 
	ofs.open(outfile);
	if (ofs.fail())
	{
		std::cout << "sorry, can't open " << outfile << std::endl;
		return ; 
	}
	
	std::string contents = 	
"                           %                         %            \n\
 @@@     %    @@     @@@@                                  *       \n\
    @@ %     @  %   @   %          %               ;      ***      \n\
     @@    @      @                               #     *****     \n\
 @@@   @@@@@  @@@@@@___    %         %           {###}  *******\n\
    @-@  @   @      @@@@       %               <## ####>********\n\
  @@@@@   @ @         @@@@@               %      {###}***********\n\
    %  @  @@ /@@@@@                          <###########> *******\n\
        @-@@@@    V     %          %           {#######}******* ***\n\
  %       @@      v        { }             <###############>*******\n\
          @@               {^^,               {## ######}***** ****\n\
  %      @@     %          (   `-;       <###################> ****\n\
         @@           _     `;;~~           {#############}********\n\
         @@   %      /(______);        <################  #####>***\n\
   %     @@@        (         (           {##################}*****\n\
          @@@        |:------( )     <##########################>**\n\
 @@@@     @@@      _//        \\        {###   ##############}*****\n\
@@@@@@@  @@@@@    / /@@@@@@@@@ vv  <##############################>\n\
@@@@@@@ @@@@@@@ @@@@@@@@@@@@@@@@@@@       @@@@@@  @@@@@@@  @@@@\n\
@@@@@@###@@@@@### @@@@@@@@@@@@@@@@@@ @@@@@@@@@@@@@@@@@@@@@@@@@@@@@\n\
@@@@@@@@###@##@@ @@@@@@@@@@@@@@@@@@@@@ @@@@@   @@@@@@@@@@@@@@@@@@@\n\
@@@@@@@@@@@### @@@@@@@@@@@@@@@@@@@@@@@@@@ @@@@@@@@@@@@@@@@@@@@@@@@\n\
-@@@@@@@@@#####@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@";

	ofs << contents;
	ofs.close();

	std::cout << "make " << outfile << " done." << std::endl;
}
