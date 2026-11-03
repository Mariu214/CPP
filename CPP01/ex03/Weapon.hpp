#ifndef WEAPON_HPP
#define	WEAPON_HPP

#include "includes.hpp"

class Weapon
{
	private :
	std::string type;

	public :
	Weapon(std::string src);
	~Weapon();
	const std::string	getType();
	void	setType(std::string value);
};

#endif