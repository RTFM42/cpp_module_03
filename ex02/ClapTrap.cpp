#include "ClapTrap.hpp"

ClapTrap::ClapTrap() : _name_("default"), _hit_points_(10), _energy_points_(10), _attack_damage_(0)
{
	std::cout << "ClapTrap default constructor called" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &cpy)
{
	*this = cpy;
	std::cout << "ClapTrap copy constructor called" << std::endl;
}

ClapTrap::ClapTrap(std::string name) : _name_(name), _hit_points_(10), _energy_points_(10), _attack_damage_(0)
{
	std::cout << "ClapTrap constructor for the name" << _name_ << " called" << std::endl;
}

ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap deconstructor for " << _name_ << " called" << std::endl;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &other)
{
	std::cout << "ClapTrap = operator called" << std::endl;
	this->_name_ = other._name_;
	this->_hit_points_ = other._hit_points_;
	this->_energy_points_ = other._energy_points_;
	this->_attack_damage_ = other._attack_damage_;
	return *this;
}

void ClapTrap::attack(const std::string &target)
{
	if (this->_hit_points_ <= 0)
	{
		std::cout << "ClapTrap " << this->_name_ << " is already dead!" << std::endl;
	}
	else if (this->_energy_points_ <= 0)
	{
		std::cout << "ClapTrap " << this->_name_ << " dosen't have enough energy points!" << std::endl;
	}
	else
	{
		std::cout << "ClapTrap " << this->_name_ << " attacks " << target << " causing " << this->_attack_damage_ << " points of damage!" << std::endl;
		this->_energy_points_--;
	}
}

void ClapTrap::takeDamage(unsigned int amount)
{
	if (this->_hit_points_ == 0)
	{
		std::cout << "ClapTrap " << this->_name_ << " is already dead!" << std::endl;
		return;
	}
	else if (this->_hit_points_ < amount)
		this->_hit_points_ = 0;
	else
		this->_hit_points_ -= amount;
	std::cout << "ClapTrap " << this->_name_ << " was attacked and lost " << amount << " hit points, he now has " << this->_hit_points_ << " hit points!" << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (this->_energy_points_ > 0 && this->_hit_points_ > 0)
	{
		this->_hit_points_ += amount;
		std::cout << "ClapTrap " << this->_name_ << " repaired " << amount << " of hit points, he now has " << this->_hit_points_ << " hit points." << std::endl;
		this->_energy_points_--;
	}
	else if (this->_energy_points_ == 0)
		std::cout << "ClapTrap " << this->_name_ << " doesn't have enough energy points." << std::endl;
	else if (this->_hit_points_ == 0)
		std::cout << "ClapTrap " << this->_name_ << " is already dead!" << std::endl;
}

const std::string &ClapTrap::getName() const
{
	return (this->_name_);
}

unsigned int ClapTrap::getHitPoint() const
{
	return (this->_hit_points_);
}

unsigned int ClapTrap::getEnergyPoints() const
{
	return (this->_energy_points_);
}

unsigned int ClapTrap::getAttackDamage() const
{
	return (this->_attack_damage_);
}

void ClapTrap::setName(const std::string &name)
{
	this->_name_ = name;
}

void ClapTrap::setHitPoint(const unsigned int value)
{
	this->_hit_points_ = value;
}

void ClapTrap::setEnergyPoints(const unsigned int value)
{
	this->_energy_points_ = value;
}

void ClapTrap::setAttackDamage(const unsigned int value)
{
	this->_attack_damage_ = value;
}

std::ostream &operator<<(std::ostream &os, const ClapTrap &object)
{
	os << "Name: " << object.getName() << std::endl;
	os << "HitPoint: " << object.getHitPoint() << std::endl;
	os << "EnergyPoints: " << object.getEnergyPoints() << std::endl;
	os << "AttackDamage: " << object.getAttackDamage() << std::endl;
	return (os);
}
