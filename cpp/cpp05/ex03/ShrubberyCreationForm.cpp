
#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm() : AForm("Shrubbery", 145, 137), target("default")
{}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : AForm("Shrubbery", 145, 137) ,target(target)
{}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm &copy) : AForm("Shrubbery", 145, 137) ,target(copy.get_target())
{
	*this = copy;
}
ShrubberyCreationForm::~ShrubberyCreationForm()
{}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(ShrubberyCreationForm &copy)
{
  (void)copy;
	return *this;
}

void ShrubberyCreationForm::execute(Bureaucrat const &exe) const
{
	if (this->get_signed() == false)
		throw (AForm::notSigned());
	else if (exe.getGrade() > this->getgrade_to_execute())
		throw (Bureaucrat::GradeTooLowException());
	else
		{
			std::ofstream file ((this->getName() + "_shrubbery").c_str());
    file << "                      ___" << std::endl;
    file << "                _,-'\"\"   \"\"\"\"`--." << std::endl;
    file << "             ,-'          __,,-- \\" << std::endl;
    file << "           ,\'    __,--\"\"\"\"dF      )" << std::endl;
    file << "          /   .-\"Hb_,--\"\"dF      /" << std::endl;
    file << "        ,\'       _Hb ___dF\"-._,-'" << std::endl;
    file << "      ,'      _,-\"\"\"\"   \"\"--..__" << std::endl;
    file << "     (     ,-'                  `." << std::endl;
    file << "      `._,'     _   _             ;" << std::endl;
    file << "       ,'     ,' `-'Hb-.___..._,-'" << std::endl;
    file << "       \\    ,'\"Hb.-\'HH`-.dHF\"" << std::endl;
    file << "        `--\'   \"Hb  HH  dF\"" << std::endl;
    file << "                \"Hb HH dF" << std::endl;
    file << "                 \"HbHHdF" << std::endl;
    file << "                  |HHHF" << std::endl;
    file << "                  |HHH|" << std::endl;
    file << "                  |HHH|" << std::endl;
    file << "                  |HHH|" << std::endl;
    file << "                  |HHH|" << std::endl;
    file << "                  dHHHb" << std::endl;
    file << "                .dFd|bHb.               o" << std::endl;
    file << "      o       .dHFdH|HbTHb.          o /" << std::endl;
    file << "\\  Y  |  \\__,dHHFdHH|HHhoHHb.__Krogg  Y" << std::endl;
    file << "##########################################" << std::endl;
    file.close();
		}
}

std::string ShrubberyCreationForm::get_target() const
{
	return (this->target);
}

std::ostream &operator<<(std::ostream &in, ShrubberyCreationForm *res)
{
	in << "name Form: " << res->getName() << "\ngrade sign: " << res->getgrade_to_signed() << "\ngrade execute: " << res->getgrade_to_execute() << "\nsigned: " << res->get_signed() << std::endl;
  return in;
}