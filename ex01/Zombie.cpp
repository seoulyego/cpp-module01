#include "Zombie.hpp"
#include <iostream>

Zombie::Zombie(void) :name("default") {}

Zombie::Zombie(std::string name) {
	this->name = name;
}

Zombie::~Zombie(void) {
	std::cout << this->name << " destroied" << std::endl;
}

void	Zombie::announce(void) {
	std::cout << this->name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

void	Zombie::setName(std::string name) {
	this->name = name;
}
