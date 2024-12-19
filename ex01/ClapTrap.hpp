#pragma once

#include <string>
#include <iostream>

class ClapTrap
{
protected:
	std::string _name_;
	unsigned int _hit_points_;
	unsigned int _energy_points_;
	unsigned int _attack_damage_;

public:
	ClapTrap();
	ClapTrap(const ClapTrap &cpy);
	ClapTrap(std::string name);
	~ClapTrap();
	ClapTrap &operator=(const ClapTrap &other);
	void attack(const std::string &target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);
	const std::string &getName() const;
	unsigned int getHitPoint() const;
	unsigned int getEnergyPoints() const;
	unsigned int getAttackDamage() const;
	void setName(const std::string &name);
	void setHitPoint(const unsigned int value);
	void setEnergyPoints(const unsigned int value);
	void setAttackDamage(const unsigned int value);
};

std::ostream &operator<<(std::ostream &os, const ClapTrap &object);
