
#include "AForm.hpp"


AForm::AForm() : name("default"), _signed(false), grade_to_signed(75), grade_to_execute(75)
{
}

AForm::AForm(const AForm &copy)
{
	if (this != &copy)
	{
		this->_signed = copy._signed;
		this->grade_to_execute = copy.grade_to_execute;
		this->grade_to_signed = copy.grade_to_signed;
	}
}

AForm::AForm(std::string name, int grade_to_signed, int grade_to_execute) : name(name), _signed(false), grade_to_signed(grade_to_signed), grade_to_execute(grade_to_execute)
{
	if (this->getgrade_to_execute() > 150 || this->getgrade_to_signed() > 150)
		throw AForm::GradeTooLowException();
	else if (this->getgrade_to_execute() < 1 || this->getgrade_to_signed() < 1)
		throw AForm::GradeTooHighException();
}

AForm &AForm::operator=(const AForm &copy)
{
	if (this != &copy)
	{
		this->_signed = copy._signed;
		this->grade_to_execute = copy.grade_to_execute;
		this->grade_to_signed = copy.grade_to_signed;
	}
	return *this;
}

void AForm::beSigned(Bureaucrat &res)
{
	if (this->grade_to_signed < res.getGrade())
		throw AForm::GradeTooLowException();
	else
		this->_signed = true;
}

int AForm::getgrade_to_signed() const
{
	return this->grade_to_signed;
}

int AForm::getgrade_to_execute() const
{
	return this->grade_to_execute;
}

std::string AForm::getName() const
{
	return this->name;
}

bool AForm::get_signed() const
{
	return this->_signed;
}

const char *AForm::GradeTooLowException::what() const throw()
{
	return("grade trop LOW");
}

const char *AForm::GradeTooHighException::what() const throw()
{
	return("grade trop HIGH");
}

const char *AForm::notSigned::what() const throw()
{
	return("Form is not signed");
}

void AForm::execute(Bureaucrat const &exe)const
{
	(void)exe;
}
AForm::~AForm()
{
}

std::ostream &operator<<(std::ostream &in, AForm *res)
{
	in << "\nname : " << res->getName() << "\nsigned :" << res->get_signed() << "\ngrade_to_signed :" << res->getgrade_to_signed() << "\ngrade_to_execute :" << res->getgrade_to_execute() << std::endl;
	return (in);
}