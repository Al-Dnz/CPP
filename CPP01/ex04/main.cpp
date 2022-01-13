#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <vector>
#include <cctype>

bool	path_error(char *argv)
{
	std::string path(argv);

	if (path[0] == '/' || path[path.length() - 1] == '/')
		return true;
	return false;
}

std::string set_filename(char *argv)
{
	std::string path(argv);
	std::istringstream stream(path); 
	std::vector<std::string> tokens;
  	for (std::string each; std::getline(stream, each, '/'); tokens.push_back(each));
	std::string &filename = tokens.back();
	for (int i = 0; filename[i]; i++)
	{
		if (filename[i] == '.')
			break;
		filename[i] = toupper(filename[i]);
	}
	filename += ".replace";
	path.clear();
	for(size_t i = 0; i != tokens.size(); i++)
	{
		path += tokens[i];
		if (i != tokens.size() - 1)
			path += "/";
	}
	return path;
}

void ft_replace(std::string &s, const std::string search, const std::string new_str)
{
	size_t pos;
	if (search.length() > s.length())
		return;
	for(pos = 0; ;pos += new_str.length()) 
	{
	    pos = s.find(search, pos);
	    if(pos == std::string::npos)
			break;
	    s.erase(pos, search.length());
	    s.insert(pos, new_str);
    }
}

int main(int argc, char **argv)
{
	if (argc != 4)
	{
		std::cout << "error\nwrong arg number\n";
		std::cout << "usage:\n ./prog filename word_to_replace replacing_word" << std::endl;
		return 1;
	}
	if (path_error(argv[1]))
	{
		std::cout << "error\nwrong filename format" << std::endl;
		return 1;
	}
	std::ifstream file_r(argv[1]);
	if (!file_r.good())
	{
		std::cout <<"error\n" << argv[1] << ": non-existent or unreadable file" << std::endl;
		return 1;
	}
	std::string new_filename = set_filename(argv[1]);
	std::ofstream file_w(new_filename.c_str(), std::ios::out | std::ios::trunc);
	std::string tmp;
	while (getline(file_r, tmp))
	{
		ft_replace(tmp, argv[2], argv[3]);
		file_w << tmp;
		if (!file_r.eof())
			file_w << std::endl;
		tmp.clear();
	}
 	file_w.close();
	file_r.close();
	return 0;
}
