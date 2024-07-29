
#include "Serializer.hpp"

int main(void)
{
	Data *a = new Data;

	a->s1 = "je suis la premiere str";
	a->s2 = "je suis la deuxieme str";
	a->test_int = 100;

	std::cout << "test avant le serialize" << std::endl;
	std::cout << a->s1 << std::endl;
	std::cout << a->s2 << std::endl;
	std::cout << a->test_int << std::endl;

	uintptr_t raw = Serializer::serializer(a);

	Data *end = Serializer::deserialize(raw);

	std::cout << "test apres le serialize" << std::endl;
	std::cout << end->s1 << std::endl;
	std::cout << end->s2 << std::endl;
	std::cout << end->test_int << std::endl;

}