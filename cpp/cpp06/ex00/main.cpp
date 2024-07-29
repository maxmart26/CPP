
#include "ScalarConverter.hpp"

int main(int ac, char **av)
{
	if (ac != 2)
	{
		std::cout << "probleme avec les arguments" << std::endl;
		return (false);
	}
	std::string str = av[1];
	ScalarConverter *test = new ScalarConverter(str);
	delete test;
}