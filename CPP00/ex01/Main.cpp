#include "PhoneBook.hpp"
#include "Contact.hpp"

int	main(void)
{
	Phonebook phonebook;
	std::string	str;

	while (str != "EXIT")
	{
		std::cout << "Please enter a command\n";
		std::getline(std::cin, str);
		if (!std::cin)
			return 0;
		if (str == "ADD")
			phonebook.add_Contact();
		if (str == "SEARCH")
			phonebook.search_Contact();
		if (str != "SEARCH" && str != "ADD" && str != "EXIT")
			std::cout << "invalid entry\n";
	}
	return (0);
}