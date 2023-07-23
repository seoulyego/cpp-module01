#include "Zombie.hpp"

int	main() {
	Zombie	a("eunrlee");
	Zombie	*b;

	a.announce();
	randomChump("gyopark");
	b = newZombie("soulee");
	b->announce();
	delete b;
	return 0;
}
