
#include "Form.hpp"


Form::Form() : name("default"), _signed(false), grade_to_signed(75), grade_to_execute(75)
{
}

Form::Form(const Form &copy)
{
	if (this != &copy)
	{
		this->_signed = copy._signed;
		this->grade_to_execute = copy.grade_to_execute;
		this->grade_to_signed = copy.grade_to_signed;
	}
}

Form::Form(std::string name, int grade_to_signed, int grade_to_execute) : name(name), _signed(false), grade_to_signed(grade_to_signed), grade_to_execute(grade_to_execute)
{
	if (this->getgrade_to_execute() > 150 || this->getgrade_to_signed() > 150)
		throw Form::GradeTooLowException();
	else if (this->getgrade_to_execute() < 1 || this->getgrade_to_signed() < 1)
		throw Form::GradeTooHighException();
}

Form &Form::operator=(const Form &copy)
{
	if (this != &copy)
	{
		this->_signed = copy._signed;
		this->grade_to_execute = copy.grade_to_execute;
		this->grade_to_signed = copy.grade_to_signed;
	}
	return *this;
}

void Form::beSigned(Bureaucrat &res)
{
	if (this->grade_to_signed < res.getGrade())
		throw Form::GradeTooLowException();
	else
		this->_signed = true;
}

int Form::getgrade_to_signed()
{
	return this->grade_to_signed;
}

int Form::getgrade_to_execute()
{
	return this->grade_to_execute;
}

std::string Form::getName()
{
	return this->name;
}

bool Form::get_signed()
{
	return this->_signed;
}

const char *Form::GradeTooLowException::what() const throw()
{
	return("grade trop LOW");
}

const char *Form::GradeTooHighException::what() const throw()
{
	return("grade trop HIGH");
}
Form::~Form()
{
}

std::ostream &operator<<(std::ostream &in, Form *res)
{
	in << "\nname : " << res->getName() << "\nsigned :" << res->get_signed() << "\ngrade_to_signed :" << res->getgrade_to_signed() << "\ngrade_to_execute :" << res->getgrade_to_execute() << std::endl;
	return (in);
}