#include <fstream>
#include <sstream>
#include <sys/_types/_size_t.h>

int	main(int argc, char *argv[]) {
	if (argc != 4)
		return (1);
	std::string	filename = argv[1];
	std::string	s1 = argv[2];
	std::string	s2 = argv[3];
	std::string line;

	std::ifstream	infile;
	infile.open(argv[1]);
	std::string	data;
	infile >> data;

	std::ofstream	outfile;
	outfile.open(filename + ".replace");

	while (true)
	{
		std::getline(infile, line);
		
		size_t pos = 0;
		while (true)
		{
			pos = line.find(s1, pos);
			if (pos == std::string::npos)
			{
				break ;
			}
			line.erase(pos, s1.length());
			line.insert(pos, s2);
			pos += s2.length();
		}
		outfile << line;
		if (infile.eof())
			break ;
		outfile << std::endl;	
	}
	return (0);
}