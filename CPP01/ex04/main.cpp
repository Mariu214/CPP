#include <iostream>
#include <fstream>
#include <string>

std::string	sed(std::string *buffer, std::string s1, std::string s2)
{
	std::size_t	index = 0;

	if (s1.length() == 0)
		return *buffer;
	while (index != std::string::npos)
	{
		index = (*buffer).find(s1, index);
		if (index == std::string::npos || index >= (*buffer).length())
			return *buffer;
		(*buffer).erase(index, s1.length());
		(*buffer).insert(index, s2);
		index += s2.length();
	}	
	return (*buffer);
}

int	main(int ac, char **av)
{
	if (ac != 4)
	{
		std::cout << "wrong number of parameter\n"; 
		return 1;
	}
	if (!av[2][0])
	{
		std::cout << "empty parameter\n";
		return 1;
	}
	std::string		source = av[1];
	std::string		s1 = av[2];
	std::string		s2 = av[3];
	std::string		final = source + ".replace";
	std::string		buffer;
	std::ifstream	input;
	std::ofstream	output;

	input.open(av[1]);
	if (input.fail())
	{
		std::cout << "error : input file failed to open\n";
		return 1;
	}
	output.open(final.c_str());
	if (output.fail())
	{
		std::cout << "error : output file failed to open\n";
		input.close();
		return 1;
	}
	while (getline(input, buffer))
	{
		output << sed(&buffer, s1, s2);
		if (!input.eof())
			output << std::endl;
	}
	input.close();
	output.close();
	return 0;
}