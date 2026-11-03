#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <iostream>
#include <iomanip>
#include <sstream>
#include <cctype>

class Contact
{
	private:
	std::string first_name;
	std::string last_name;
	std::string nickname;
	std::string	phone_number;
	std::string	secret;
	int			index;

	public:
	Contact();
	~Contact();

	int				check_alpha(std::string str);
	int				check_digit(std::string str);
	bool			init_Contact(int i);
	std::string		check_size(std::string str);
	void			light_display();
	void			full_display();
} ;

#endif