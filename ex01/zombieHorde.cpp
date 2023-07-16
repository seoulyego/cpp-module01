#include "Zombie.hpp"
#include <sstream>

Zombie	*zombieHorde(int N, std::string name) {
	Zombie	*a = new Zombie[N];

	for(int i = 0; i < N; i++) {
		std::stringstream b;

		b << name << i;
		a[i].setName(b.str());
		a[i].announce();
	}
	return a;
}