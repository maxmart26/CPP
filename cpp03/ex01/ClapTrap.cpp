
#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string name)
{
    this->name = name;
    this->Attack = 0;
    this->Energy = 10;
    this->Hit_points = 10;
    std::cout << "Constructeur de " << name << std::endl;
}
ClapTrap::~ClapTrap()
{
    std::cout << "Destructeur de " << name << std::endl;
}

void ClapTrap::attack(const std::string& target)
{
    if (this->Energy == 0)
    {
        std::cout << this->name << "manque d energie " << std::endl;
        return;
    }
    std::cout << "ClapTrap " << this->name << " attack " << target << ", causing " << this->Attack << " points of damage!" << std::endl;
    this->Energy -= 1;
}

void ClapTrap::beRepaired(unsigned int amount)
{
    if (this->Energy == 0)
    {
        std::cout << this->name << "manque d energie " << std::endl;
        return;
    }
    std::cout << "ClapTrap " << this->name << " Repair" << amount << std::endl;
    this->Energy -= 1;
    this->Hit_points += amount;
}

void ClapTrap::takeDamage(unsigned int amount)
{
    if (this->Energy == 0)
    {
        std::cout << this->name << "manque d energie " << std::endl;
        return;
    }
    std::cout << "ClapTrap " << this->name << " takeDamage " << amount << std::endl;
    this->Energy -= 1;
    this->Hit_points -= amount;
}