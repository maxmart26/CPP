#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonform.hpp"

int main(void)
{
    try{
        Bureaucrat Lucy("Lucy", 2);
        ShrubberyCreationForm form1("Shrubbery");
        RobotomyRequestForm form2("Robotomy");
        PresidentialPardonform form3("President");

        std::cout << std::endl;
        std::cout << "Form 1 : Shrubbery" << std::endl;
        Lucy.signAForm(form1);
        Lucy.executeAForm(form1);
        
        std::cout << "Form 2 : Robotomy" << std::endl;
        Lucy.signAForm(form2);
        Lucy.executeAForm(form2);
        Lucy.executeAForm(form2);
        Lucy.executeAForm(form2);
        Lucy.executeAForm(form2);
        Lucy.executeAForm(form2);

        std::cout << "Form 3 : Presidential" << std::endl;
        Lucy.signAForm(form3);
        Lucy.executeAForm(form3);
        
    } 
    catch (std::exception &e) {
        std::cout << e.what() << std::endl;
    }
    return (0);
}