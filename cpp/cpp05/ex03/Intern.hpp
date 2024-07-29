
#ifndef INTERN_HPP
#define INTERN_HPP

#include <string>

#include "AForm.hpp"
#include "Bureaucrat.hpp"
#include "PresidentialPardonform.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

class Intern
{
private:
	/* data */
public:
	Intern();
	Intern(Intern &copy);
	~Intern();

	Intern &operator=(const Intern &copy);

	AForm *makeForm(const std::string creat, const std::string form);
};




#endif