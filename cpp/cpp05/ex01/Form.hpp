
#ifndef FORM_HPP
#define FORM_HPP

#include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
private:
	const std::string name;
	bool _signed;
	int grade_to_signed;
	int grade_to_execute;
public:
	Form();
	Form(const Form &copy);
	Form(std::string name , int grade_to_signed,  int grade_to_execute);
	Form &operator=(const Form &copy);
	~Form();

	void beSigned(Bureaucrat &res);

	std::string getName();
	bool get_signed();
	int getgrade_to_signed();
	int getgrade_to_execute();

	class GradeTooHighException : public std::exception
	{
	public:
		virtual const char *what() const throw();
	};

	class GradeTooLowException : public std::exception
	{
	public:
		virtual const char *what() const throw();
	};


	
};

std::ostream &operator<<(std::ostream &in, Form *res);


#endif