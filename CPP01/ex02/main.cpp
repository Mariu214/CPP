#include <iostream>

int	main(void)
{
	std::string	str = "HI THIS IS BRAIN";
	std::string *stringPTR = &str;
	std::string	&stringREF = str;

	std::cout << "memory adress of str: " << &str << "\n";
	std::cout << "memory adress of stringPTR: " << stringPTR << "\n";
	std::cout << "memory adress of stringREF: " << &stringREF << "\n";

	std::cout << "value of str: " << str << "\n";
	std::cout << "value of stringPTR: " << *stringPTR << "\n";
	std::cout << "value of stringREF: " << stringREF << "\n";

	return (0);
}
