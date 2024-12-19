#include "ScavTrap.hpp"

int main(void)
{
	ScavTrap object("John");
	std::cout << object;
	object.guardGate();
	std::cout << object;
	object.attack("Ken");
	std::cout << object;
	object.takeDamage(100);
	std::cout << object;
	object.beRepaired(10);
	std::cout << object;
	return (0);
}
