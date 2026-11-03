#include "includes.hpp"

HumanB::HumanB(std::string src) : name(src)
{
	this->weapon = NULL;
}

HumanB::~HumanB()
{
}

void	HumanB::attack()
{
	if (this->weapon == NULL)
	{
		std::cout << name << " doesn't have any weapon to attack with \n";
		return ;
	}
	std::cout << name << " attacks with their " << weapon->getType() << std::endl;
}

void	HumanB::setWeapon(Weapon &src)
{
	weapon = &src;
}