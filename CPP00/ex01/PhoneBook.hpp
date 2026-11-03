#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include "Contact.hpp"

class Phonebook
{
	private:
	Contact	Contacts[8];
	int	index_Contact;
	int	total_Contact;

	public:
	Phonebook();
	~Phonebook();
	void	add_Contact();
	void	search_Contact();
} ;

#endif