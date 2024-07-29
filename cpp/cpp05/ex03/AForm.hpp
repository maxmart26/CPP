
#ifndef AForm_HPP
#define AForm_HPP

#include "Bureaucrat.hpp"

class Bureaucrat;

class AForm
{
private:
	const std::string name;
	bool _signed;
	int grade_to_signed;
	int grade_to_execute;
public:
	AForm();
	AForm(const AForm &copy);
	AForm(std::string name , int grade_to_signed,  int grade_to_execute);
	AForm &operator=(const AForm &copy);
	virtual ~AForm();

	void beSigned(Bureaucrat &res);

	std::string getName()const;
	bool get_signed()const;
	int getgrade_to_signed()const;
	int getgrade_to_execute()const;

	virtual void execute(Bureaucrat const &exe)const;

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
	class notSigned : public std::exception
	{
	public:
		virtual const char *what() const throw();
	};


	
};

std::ostream &operator<<(std::ostream &in, AForm *res);


#endif