
#include "Bureaucrat.hpp"

int main(void)
{
    try{
        Bureaucrat Lucy("Lucy", 5);
        Bureaucrat Lucas("Lucas", 1);

        std::cout << Lucy << std::endl;
        std::cout << "Bureaucrat got promoted" << std::endl;
        Lucy.Incrementation();
        std::cout << Lucy << std::endl;

        std::cout << Lucas << std::endl;
        std::cout << "Bureaucrat got promoted" << std::endl;
        Lucas.Degrementation();
        std::cout << Lucas << std::endl;

        //bureaucrat.decGrade();
    } 
    catch (Bureaucrat::GradeTooLowException &e) {
        std::cout << e.what() << std::endl;
    }
    return (0);
}