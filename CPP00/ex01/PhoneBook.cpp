#include "PhoneBook.hpp"

Phonebook::Phonebook(){index_Contact = 0; total_Contact = 0;}
Phonebook::~Phonebook(){}

void	Phonebook::add_Contact()
{
	std::string str;

	if (total_Contact >= 8)
		std::cout << "maximum number of Contacts reached, the oldest one will be deleted\n";
	if (index_Contact == 7)
	{
		if (Contacts[index_Contact].init_Contact(index_Contact))
		{
			if (total_Contact < 8)
				total_Contact++;
			index_Contact = 0;
		}
	}
	else 
	{
		if (Contacts[index_Contact].init_Contact(index_Contact))
		{
			if (total_Contact < 8)
				total_Contact++;
			index_Contact++;
		}
	}
}

void	Phonebook::search_Contact()
{
	std::string 		src;
	int					target = 0;

	if (total_Contact == 0)
	{
		std::cout << "no Contacts saved\n";
		return;
	}
	for(int i = 0; i < total_Contact; i++)
	{
		Contacts[i].light_display();
	}
	std::cout << "please enter the enter you wish to search | available Contacts : 1-" << total_Contact << "\n";
	while (target < 1 || target > total_Contact)
	{
		std::stringstream	temp;
		std::getline(std::cin, src);
		if (!std::cin)
			return ;
		temp << src;
		temp >> target;
		if (target < 1 || target > total_Contact)
			std::cout << "This Contact does not exist\n";
	}
	Contacts[target - 1].full_display();
	return ;
}

