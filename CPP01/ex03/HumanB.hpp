#ifndef	HUMANB_HPP
#define	HUMANB_HPP

#include "includes.hpp"


class HumanB
{
private:
	Weapon		*weapon;
	std::string	name;

public:
	HumanB(std::string src);
	~HumanB();
	void	attack();
	void	setWeapon(Weapon &src);
};

#endif