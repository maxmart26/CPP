
#ifndef SHRUBBERYCREATIONFORM_HPP
#define SHRUBBERYCREATIONFORM_HPP

#include "AForm.hpp"
#include <fstream>

class AForm;

class ShrubberyCreationForm : public AForm
{
private:
	const std::string target;
	ShrubberyCreationForm();
public:
	ShrubberyCreationForm(std::string target);
	ShrubberyCreationForm(ShrubberyCreationForm &copy);

	ShrubberyCreationForm &operator=(ShrubberyCreationForm &copy);

	~ShrubberyCreationForm();

	void execute(Bureaucrat const &exe)const;

	std::string get_target()const;
};

std::ostream &operator<<(std::ostream &in, ShrubberyCreationForm *res);

#endif