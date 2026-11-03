#include "includes.hpp"

HumanA::HumanA(std::string src, Weapon &weapon) : name(src), weapon(weapon){}

HumanA::~HumanA(){}

void	HumanA::attack(){std::cout << name << " attacks with their " << weapon.getType() << "\n";}