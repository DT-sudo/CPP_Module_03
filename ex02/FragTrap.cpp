#include "FragTrap.hpp"

void FragTrap::highFivesGuys(void) const
{
    std::cout << "FragTrap " << _name << " sends high-fives request!" << std::endl;
}

FragTrap::FragTrap(): ClapTrap("default")
{
    _hit_points = 100;
    _energy = 100;
    _damage = 30;
    std::cout << "FragTrap " << _name << " default constructor called" << std::endl;
}

FragTrap::FragTrap(std::string name): ClapTrap(name)
{
    _hit_points = 100;
    _energy = 100;
    _damage = 30;
    std::cout << "FragTrap " << _name << " constructor called" << std::endl;
}

FragTrap::FragTrap(const FragTrap& other): ClapTrap(other)
{
    *this = other;
}

FragTrap::~FragTrap()
{
    std::cout << "FragTrap " << _name << " destructor called" << std::endl;
}

FragTrap& FragTrap::operator=(const FragTrap& other)
{
    if(this != &other)
        ClapTrap::operator=(other);
    return *this;
}
