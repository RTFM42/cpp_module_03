#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap("")
{
	this->_hit_points_ = 100;
	this->_energy_points_ = 50;
	this->_attack_damage_ = 20;
	std::cout << "Default ScavTrap constructed!" << std::endl;
}

ScavTrap::ScavTrap(const std::string &name) : ClapTrap(name)
{
	this->_hit_points_ = 100;
	this->_energy_points_ = 50;
	this->_attack_damage_ = 20;
	std::cout << "ScavTrap " << name << " constructed!" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &other) : ClapTrap(other) {}

ScavTrap &ScavTrap::operator=(const ScavTrap &other)
{
	if (this != &other)
	{
		ClapTrap::operator=(other);
	}
	return (*this);
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap " << this->_name_ << " destructed!" << std::endl;
}

void ScavTrap::attack(const std::string &target)
{
	if (this->_hit_points_ <= 0)
	{
		std::cout << "ScavTrap " << this->_name_ << " is already dead!" << std::endl;
	}
	else if (this->_energy_points_ <= 0)
	{
		std::cout << "ScavTrap " << this->_name_ << " dosen't have enough energy points!" << std::endl;
	}
	else
	{
		std::cout << "ScavTrap " << this->_name_ << " attacks " << target << " causing " << this->_attack_damage_ << " points of damage!" << std::endl;
		this->_energy_points_--;
	}
}

void ScavTrap::guardGate()
{
	std::cout << "ScavTrap " << this->_name_ << " is now in Gate keeper mode!" << std::endl;
}
