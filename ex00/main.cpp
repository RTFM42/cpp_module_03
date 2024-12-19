#include "ClapTrap.hpp"
#include <climits>

int main(void)
{
	ClapTrap object("John");
	std::cout << object;
	object.attack("Ken");
	std::cout << object;
	object.beRepaired(100);
	std::cout << object;
	object.takeDamage(UINT_MAX);
	std::cout << object;
	return (0);
}
