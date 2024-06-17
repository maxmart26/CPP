
#include "ClapTrap.hpp"

int main(void)
{
	ClapTrap clap("maxime");
	ClapTrap clapa("laura");
	clap.attack("laura");
	clapa.attack("maxime");
	clap.takeDamage(2);
	clapa.takeDamage(2);
	for(int i = 0; i < 10; i++)
	{
	clap.beRepaired(2);
	clapa.beRepaired(2);
	}
}
