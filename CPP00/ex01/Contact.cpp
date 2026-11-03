#include "Contact.hpp"

Contact::Contact(){}
Contact::~Contact(){}

int			Contact::check_alpha(std::string str)
{
	for(int	i = 0; i < (int)str.length(); i++)
		if (!isalpha(str[i]) && str[i] != '-' && str[i] != ' ')
			return (0);
	return (1);
}

int			Contact::check_digit(std::string str)
{
	for(int	i = 0; i < (int)str.length(); i++)
		if (!isdigit(str[i]) && str[i] != '+' && str[i] != ' ')
			return (0);
	return (1);
}

bool		Contact::init_Contact(int i)
{
	std::string	str;
	// std::stringstream;

	

	std::cout << "Contact First Name: ";
	std::getline(std::cin, str);
	if (!std::cin)
			return 0;
	while (!check_alpha(str) || !str.length())
	{
		std::cout << "Only letters and '-' are accepted \nContact First Name: ";
		std::getline(std::cin, str);
		if (!std::cin)
			return 0;
	}
	first_name = str;
	std::cout << "Contact Last Name: ";
	std::getline(std::cin, str);
	if (!std::cin)
			return 0;
	while (!check_alpha(str) || !str.length())
	{
		std::cout << "Only letters and '-' are accepted \nContact Last Name: ";
		std::getline(std::cin, str);
		if (!std::cin)
			return 0;
	}
	last_name = str;
	std::cout << "Contact Nickname: ";
	std::getline(std::cin, str);
	if (!std::cin)
		return 0;
	while (!str.length())
	{
		std::cout << "Please enter a Nickname \nContact Nickname: ";
		std::getline(std::cin, str);
		if (!std::cin)
			return 0;
	}
	nickname = str;
	std::cout << "Contact phone number: ";
	std::getline(std::cin, str);
	if (!std::cin)
			return 0;
	while (!check_digit(str) || !str.length())
	{
		std::cout << "Only numbers are accepted \nContact phone number: ";
		std::getline(std::cin, str);
		if (!std::cin)
			return 0;
	}
	phone_number = str;
	std::cout << "Contact darkest secret: ";
	std::getline(std::cin, str);
	if (!std::cin)
		return 0;
	while (!str.length())
	{
		std::cout << "Please enter a secret \nContact darkest secret: ";
		std::getline(std::cin, str);
		if (!std::cin)
			return 0;
	}
	secret = str;
	index = i + 1;
	return 1;
}

std::string	Contact::check_size(std::string str)
{
	if (str.length() > 9)
		return str.substr(0, 9) + '.';
	return str;
}

void		Contact::light_display()
{
	std::cout << "|" << std::setw(10) << index;
	std::cout << "|" << std::setw(10) << check_size(first_name);
	std::cout << "|" << std::setw(10) << check_size(last_name);
	std::cout << "|" << std::setw(10) << check_size(nickname) << "|\n";
}

void		Contact::full_display()
{
	std::cout << "Index: " << index << "\n";
	std::cout << "First Name: " << first_name << "\n";
	std::cout << "Last Name: " << last_name << "\n";
	std::cout << "Nickname: " << nickname << "\n";
	std::cout << "Phone number: " << phone_number << "\n";
	std::cout << "Darkest secret: " << secret << "\n";
}
