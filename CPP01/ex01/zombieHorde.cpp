#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name)
{
	if (N <= 0)
	{
		std::cout << "PENNY IS NOT IMPRESSED WITH YOUR HORDE!\n";
		return (NULL);
	}
	Zombie *NewZombie = new Zombie[N];
	if (NewZombie == NULL)
		return (NULL);
	for (int i = 0; i < N; i++)
	{
		NewZombie[i].get_named(name);
		NewZombie[i].announce();
	}
	return (NewZombie);
}