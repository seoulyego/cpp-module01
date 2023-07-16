#include "Zombie.hpp"

int	main(void) {
	Zombie *a;

	a = zombieHorde(10, "eunrlee");
	delete [] a;
	return (0);
}
