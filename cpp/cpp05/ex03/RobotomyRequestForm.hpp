
#ifndef ROBOTOMYREGUESTFORM_HPP
#define ROBOTOMYREGUESTFORM_HPP

#include "AForm.hpp"

class AForm;

class RobotomyRequestForm : public AForm
{
private:
	const std::string target;
	RobotomyRequestForm();
public:
	RobotomyRequestForm(std::string target);
	RobotomyRequestForm(RobotomyRequestForm &copy);

	RobotomyRequestForm &operator=(RobotomyRequestForm &copy);

	~RobotomyRequestForm();

	void execute(Bureaucrat const &exe)const;

	std::string get_target()const;
};

std::ostream &operator<<(std::ostream &in, RobotomyRequestForm *res);

#endif