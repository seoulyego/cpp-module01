#include "Weapon.hpp"
#include <string>

Weapon::Weapon(void) :type("default") {};

Weapon::Weapon(std::string type) :type(type) {};

Weapon::~Weapon(void) {};

const std::string&	Weapon::getType(void) const {
	return this->type;
}

void	Weapon::setType(std::string type) {
	this->type = type;
}
