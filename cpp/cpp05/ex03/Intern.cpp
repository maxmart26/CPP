
#include "Intern.hpp"

Intern::Intern(){}

Intern::Intern(Intern &copy)
{
	*this = copy;
}

Intern &Intern::operator=(const Intern &copy)
{
	(void)copy;
	return(*this);
}

Intern::~Intern()
{
}

static AForm *creatPresi(const std::string form)
{
	return (new PresidentialPardonform(form));
}

static AForm *creatRobot(const std::string form)
{
	return (new RobotomyRequestForm(form));
}

static AForm *creatShubbery(const std::string form)
{
	return (new ShrubberyCreationForm(form));
}

AForm *Intern::makeForm(const std::string creat, const std::string form)
{
	AForm *(*forms[])( std::string formst) = {&creatPresi, &creatRobot, &creatShubbery};
	std::string form_tab[] = {"presidential request", "robotomy request", "shrubbery request"};

	for(int i = 0; i < 3; i++)
	{
		if (creat == form_tab[i])
		{
			std::cout << "intern creates " << creat << std::endl;
				return(forms[i](form));
		}
	}
	std::cout << "intern NOT creates " << creat << std::endl;
	return (NULL);
}