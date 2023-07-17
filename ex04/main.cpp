#include <cstring>
#include <fstream>
#include <iostream>

int	main(int argc, char *argv[]) {
	if (argc != 4) {
		std::cout << "Only 4 arguments are allowed" << std::endl;
		return (1);
	}

	std::string		filename = argv[1];
	std::string		s1 = argv[2];
	std::string		s2 = argv[3];
	const size_t	s1_length = s1.length();
	const size_t	s2_length = s2.length();

	std::string		contents;
	std::ifstream	infile;
	std::ofstream	outfile;

	if (std::strlen(argv[1]) == 0 || s1_length == 0 || s2_length == 0) {
		std::cout << "Argument is empty" << std::endl;
		return (1);
	}

	infile.open(filename);
	if (infile.fail()) {
		std::cout << "Can't open infile" << std::endl;
		return (1);
	}

	outfile.open(filename + ".replace");
	if (outfile.fail()) {
		std::cout << "Can't open outfile" << std::endl;
		return (1);
	}

	while (true) {
		std::getline(infile, contents);
		
		size_t pos = 0;
		while (true) {
			pos = contents.find(s1, pos);
			if (pos == std::string::npos)
				break ;
			contents.erase(pos, s1_length);
			contents.insert(pos, s2);
			pos += s2_length;
		}
		outfile << contents;
		if (infile.eof())
			break ;
		outfile << std::endl;	
	}
	infile.close();
	outfile.close();
	return (0);
}