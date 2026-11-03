#include "Harl.hpp"

int	main(int ac, char **av)
{
	Harl	Harl;

	if (ac < 2)
	{
		std::cout << "please enter something valid, Harl really need to vent\n";
		return 1;
	}
	for (int i = 1; i < ac; i++)
	{
		Harl.complain(av[i]);
	}
	return 0;
}