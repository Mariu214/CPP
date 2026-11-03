#include <iostream>

int	main(int ac, char **av)
{
	std::string str;

	if (ac < 2)
		return (std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE * \n", 0);
	for (int i = 1; i < ac; i++)
	{
		str = av[i];
		for (int j = 0; j < (int)str.length(); j++)
			std::cout << (char)toupper(str[j]);
	}
	std::cout << "\n";
	return (0);
}