
#ifndef PRESIDENTIALPARDONFORM_CPP
#define PRESIDENTIALPARDONFORM_CPP

#include "AForm.hpp"

class AForm;

class PresidentialPardonform : public AForm
{
private:
	const std::string target;
	PresidentialPardonform();
public:
	PresidentialPardonform(std::string target);
	PresidentialPardonform(PresidentialPardonform &copy);

	PresidentialPardonform &operator=(PresidentialPardonform &copy);

	~PresidentialPardonform();

	void execute(Bureaucrat const &exe)const;

	std::string get_target()const;
};

std::ostream &operator<<(std::ostream &in, PresidentialPardonform *res);

#endif