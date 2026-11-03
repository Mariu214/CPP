#include "Zombie.hpp"

int	main(void)
{
	Zombie *garys;

	garys = zombieHorde(-10, "gary");
	if (!garys)
		return (0);
	delete[] garys;
	return (0);
}