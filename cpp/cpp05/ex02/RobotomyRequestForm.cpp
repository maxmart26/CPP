
#include "RobotomyRequestForm.hpp"

static size_t count = 0;

RobotomyRequestForm::RobotomyRequestForm() : AForm("Robot", 72, 45), target("default")
{}

RobotomyRequestForm::RobotomyRequestForm(std::string target) : AForm("Robot", 72, 45) ,target(target)
{}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm &copy) : AForm("Robot", 72, 45) ,target(copy.get_target())
{
	*this = copy;
}
RobotomyRequestForm::~RobotomyRequestForm()
{}

RobotomyRequestForm &RobotomyRequestForm::operator=(RobotomyRequestForm &copy)
{
	(void)copy;
	return *this;
}

void RobotomyRequestForm::execute(Bureaucrat const &exe) const
{
	if (this->get_signed() == false)
		throw (AForm::notSigned());
	else if (exe.getGrade() > this->getgrade_to_execute())
		throw (Bureaucrat::GradeTooLowException());
	else if (count++ % 2)
		std::cout << this->get_target() << " was robot" << std::endl;
	else
		std::cout << this->get_target() << " robot fail" << std::endl;
}

std::string RobotomyRequestForm::get_target() const
{
	return (this->target);
}

std::ostream &operator<<(std::ostream &in, RobotomyRequestForm *res)
{
	in << "name Form: " << res->getName() << "\ngrade sign: " << res->getgrade_to_signed() << "\ngrade execute: " << res->getgrade_to_execute() << "\nsigned: " << res->get_signed() << std::endl;
	return in;
}