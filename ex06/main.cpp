#include "Harl.hpp"
#include <iostream>
#include <string>
int	main(int argc, char *argv[]) {
	if (argc != 2)
	{
		std::cout << "Only 2 arguments are allowed" << std::endl;
		return 1;
	}

	Harl	harl;
	std::string	level = argv[1];
	harl.complain(level);
	return 0;
}