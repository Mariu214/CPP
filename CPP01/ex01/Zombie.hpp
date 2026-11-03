#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>

class Zombie
{
	private:
	std::string	name;
	
	public:
	Zombie();
	~Zombie();
	void	announce(void);
	void	get_named(std::string type);
};

Zombie* zombieHorde( int N, std::string name);

#endif