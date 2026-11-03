#ifndef	HUMANA_HPP
#define	HUMANA_HPP

#include "includes.hpp"


class HumanA
{
private:
	std::string	name;
	Weapon		&weapon;

public:
	HumanA(std::string src, Weapon &weapon);
	~HumanA();
	void	attack();
};

#endif