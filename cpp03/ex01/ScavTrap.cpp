
#include "ScavTrap.hpp"

ScavTrap::ScavTrap(const std::string& name) : ClapTrap(name)
{
    this->guardGate = 0;
    this->Energy = 50;
    this->Hit_points = 100;
    this->Attack = 20;
    std::cout << "construction de ScavTrap du nom de " << name << std::endl;
}
ScavTrap::~ScavTrap()
{
    std::cout << "destructeur de ScavTrap" << std::endl;
}
