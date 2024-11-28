#include <fstream>
#include <iostream>
#include <sstream>

std::string loadFile(char *filename)
{
	std::stringstream buf;
	std::ifstream input(filename);

	if (!input)
	{
		std::cerr << "Error: " << filename << " not found." << std::endl;
		return "";
	}
	buf << input.rdbuf();
	return buf.str();
}

bool subcmp(std::string &buffer, std::string &s1, size_t i)
{
	size_t j = 0;

	if (s1.empty())
		return false;
	for (j = 0; j < s1.size() && j < buffer.size(); j++)
	{
		if (buffer[i + j] != s1[j])
			return false;
	}
	return j < buffer.size();
}


void search_and_replace(std::string &buffer, std::string &s1, std::string &s2, std::string &fileName)
{
	std::string newBuffer;

	size_t i = 0;
	while (i < buffer.size())
	{
		if (subcmp(buffer, s1, i))
		{
			i += s1.size();
			newBuffer += s2;
		}
		else
			newBuffer.push_back(buffer[i++]);
	}

	const std::string str = fileName + ".replace";
	std::ofstream out(str);
	if (!out)
	{
		std::cerr << "Error: cannot open " + fileName << ".replace" << std::endl;
		return;
	}
	out << newBuffer;
	out.close();
}

int main(int ac, char **av)
{
	if (ac != 4)
	{
		std::cerr << "Usage: " << av[0] << " <arg1> <arg2> <arg3>" << std::endl;
		return 1;
	}
	std::string file1 = loadFile(av[1]);
	if (file1.empty())
		return 0;

	std::string fileName = std::string(av[1]);
	std::string s1 = std::string(av[2]);
	std::string s2 = std::string(av[3]);
	search_and_replace(file1, s1, s2, fileName);
	return 0;
}

