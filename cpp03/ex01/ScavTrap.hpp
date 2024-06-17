
#include <iostream>
#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
private:
    int guardGate;
public:
    ScavTrap(const std::string& name);
    ~ScavTrap();
};
