#include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap("")
{
    this->_hit_points_ = 100;
    this->_energy_points_ = 100;
    this->_attack_damage_ = 30;
    std::cout << "Default FragTrap constructed!" << std::endl;
}

FragTrap::FragTrap(const std::string &name) : ClapTrap(name)
{
    this->_hit_points_ = 100;
    this->_energy_points_ = 100;
    this->_attack_damage_ = 30;
    std::cout << "FragTrap " << name << " constructed!" << std::endl;
}

FragTrap::FragTrap(const FragTrap &other) : ClapTrap(other) {}

FragTrap::~FragTrap()
{
    std::cout << "FragTrap " << this->_name_ << " destructed!" << std::endl;
}

void FragTrap::highFivesGuys(void)
{
    std::cout << "FragTrap " << this->_name_ << " requests a high five!" << std::endl;
}

FragTrap &FragTrap::operator=(const FragTrap &other)
{
    if (this != &other)
    {
        ClapTrap::operator=(other);
    }
    return (*this);
}
