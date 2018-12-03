#include "golf.h"

void	setGolf(golf& g, const char* name, int hc)
{
	strncpy(g.fullname, name, Len - 1);
	g.fullname[Len - 1] = '\0';
	g.handicap = hc;
}

int setGolf(golf& g)
{
	std::string name;

	std::cout << "fullname: ";
	std::getline(std::cin, name);
	setGolf(g, name.c_str(), 0);

	std::cout << "handicap: ";
	std::getline(std::cin, name);
	g.handicap = atoi(name.c_str());
	if (!strlen(g.fullname))
		return 0;
	return (strlen(g.fullname) == 0 ? 0 : 1);
}

void handicap(golf & g, int hc)
{
	g.handicap = hc;
}

void showGolf(const golf& g)
{
	std::cout << "name: " << g.fullname << std::endl << "handicap: " << g.handicap << std::endl;
}
