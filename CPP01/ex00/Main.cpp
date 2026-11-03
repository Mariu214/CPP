#include "Zombie.hpp"

int	main(void)
{
	Zombie *Shaun;

	Shaun = newZombie("Shaun");
	randomChump("Ed");
	delete Shaun;
	return (0);
}