#include "includes.hpp"

Weapon::Weapon(std::string src) : type(src){}
Weapon::~Weapon(){}

const std::string	Weapon::getType(){return type;}
void	Weapon::setType(std::string value){type = value;}