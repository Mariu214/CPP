#include "Zombie.hpp"

Zombie::Zombie(std::string type)
{
	name = type;
}

Zombie::~Zombie(){std::cout << name << ": Composted!\n";}

void	Zombie::announce(){std::cout << name << ": BraiiiiiiinnnzzzZ...\n";}