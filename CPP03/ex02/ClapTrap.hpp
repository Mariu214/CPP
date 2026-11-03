#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>

class	ClapTrap
{
	protected :
	std::string	_name;
	unsigned int			_HP;
	unsigned int			_Energy;
	unsigned int			_Attack;

	public :
	ClapTrap();
	ClapTrap(std::string name);
	ClapTrap(const ClapTrap &src);
	ClapTrap& operator=(const ClapTrap &other);
	virtual ~ClapTrap();
	void	attack(const std::string& target);
	void	takeDamage(unsigned int amount);
	void	beRepaired(unsigned int amount);
	bool	is_able();
};

#endif