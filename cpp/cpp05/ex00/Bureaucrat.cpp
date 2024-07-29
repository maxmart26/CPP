
#include "Bureaucrat.hpp"


Bureaucrat::Bureaucrat() : name("default"), grade(75)
{
}

Bureaucrat::Bureaucrat(std::string name, int grade) : name(name) , grade(grade){}

Bureaucrat &Bureaucrat::operator=(const Bureaucrat &copy)
{
	if (this != &copy)
	{
		this->grade = copy.grade;
	}
	return *this;
}

Bureaucrat::Bureaucrat(const Bureaucrat &copy)
{
	if (this != &copy)
	{
		this->grade = copy.grade;
	}
}

Bureaucrat::~Bureaucrat()
{
}

void Bureaucrat::Incrementation()
{
	if (this->grade + 1 > 150)
		throw Bureaucrat::GradeTooHighException();
	else
		this->grade += 1;
}

void Bureaucrat::Degrementation()
{

	if (this->grade - 1 < 1)
		throw Bureaucrat::GradeTooLowException();
	else
		this->grade -= 1;
}
const std::string Bureaucrat::getName() const
{
	return (this->name);
}

int Bureaucrat::getGrade()
{
	return (this->grade);
}

const char *Bureaucrat::GradeTooLowException::what() const throw()
{
	return("grade trop Low");
}

const char *Bureaucrat::GradeTooHighException::what() const throw()
{
	return("grade trop High");
}

std::ostream &operator<<(std::ostream &in, Bureaucrat &res)
{
	in << res.getName() <<", bureaucrat grade " << res.getGrade() << std::endl;
	return(in);
}