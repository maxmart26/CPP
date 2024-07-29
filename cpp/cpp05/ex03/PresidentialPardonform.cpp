
#include "PresidentialPardonform.hpp"

PresidentialPardonform::PresidentialPardonform() : AForm("Presidential", 25, 5), target("default")
{}

PresidentialPardonform::PresidentialPardonform(std::string target) : AForm("Presidential", 25, 5) ,target(target)
{}

PresidentialPardonform::PresidentialPardonform(PresidentialPardonform &copy) : AForm("Presidential", 25, 5) ,target(copy.get_target())
{
	*this = copy;
}

PresidentialPardonform::~PresidentialPardonform()
{}

PresidentialPardonform &PresidentialPardonform::operator=(PresidentialPardonform &copy)
{
	(void)copy;
	return *this;
}

void PresidentialPardonform::execute(Bureaucrat const &exe) const
{
	if (this->get_signed() == false)
		throw (AForm::notSigned());
	else if (exe.getGrade() > this->getgrade_to_execute())
		throw (Bureaucrat::GradeTooLowException());
	else
		std::cout << this->get_target() << " pardonned by zaphod Beeblebrox" << std::endl;
}

std::string PresidentialPardonform::get_target() const
{
	return (this->target);
}

std::ostream &operator<<(std::ostream &in, PresidentialPardonform *res)
{
	in << "name Form: " << res->getName() << "\ngrade sign: " << res->getgrade_to_signed() << "\ngrade execute: " << res->getgrade_to_execute() << "\nsigned: " << res->get_signed() << std::endl;
	return in;
}