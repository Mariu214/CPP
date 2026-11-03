#include <iostream>
#include "Zombie.hpp"

Zombie::Zombie(){}

Zombie::~Zombie(){std::cout << name << ": composted!\n";}

void	Zombie::announce(){std::cout << name << ": BraiiiiiiinnnzzzZ...\n";}

void	Zombie::get_named(std::string type){name = type;}


