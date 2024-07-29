

#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>
#include "AForm.hpp"

class AForm;

class Bureaucrat
{
private:
	const std::string name;
	int grade;
public:
	Bureaucrat();
	Bureaucrat(std::string name, int grade);
	Bureaucrat &operator=(const Bureaucrat &copy);
	Bureaucrat(const Bureaucrat &copy);
	~Bureaucrat();

	int getGrade() const;
	void Incrementation();
	void Degrementation();

	const std::string getName()const;

	void signAForm(AForm &AForm);

	void executeAForm(AForm &AForm);
	
	class GradeTooLowException : public std::exception
	{
	public:
		virtual const char *what() const throw();
	};
	
	class GradeTooHighException : public std::exception
	{
	public:
		virtual const char *what() const throw();
	};
	
};

std::ostream &operator<<(std::ostream &in, Bureaucrat *res);
#endif