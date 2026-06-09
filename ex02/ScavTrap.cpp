#include "ScavTrap.hpp"

void ScavTrap::guardGate()
{
    std::cout << "ScavTrap " << _name << " is now in Gate keeper mode" << std::endl;
}

void ScavTrap::attack(const std::string& target)
{
    if (_hit_points == 0)
    {
        std::cout << "ScavTrap " << _name <<  " is already dead and can't attack nobody" << std::endl;
        return;
    }
    if (_energy > 0)
    {
        _energy -= 1;
        std::cout << "ScavTrap " << _name << " just has attacked " << target <<": -"
        << _damage << " health points" << std::endl;
    }
    else
        std::cout << "ScavTrap " << _name << " has no energy to attack " << target << std::endl;
}

ScavTrap::ScavTrap(): ClapTrap("default")
{
    _hit_points = 100;
    _energy = 50;
    _damage = 20;
    std::cout << "ScavTrap " << _name << " default constructor called" << std::endl;
}

ScavTrap::ScavTrap(std::string name): ClapTrap(name)
{
    _hit_points = 100;
    _energy = 50;
    _damage = 20;
    std::cout << "ScavTrap " << _name << " constructor called" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap& other): ClapTrap(other)
{
    *this = other;
}

ScavTrap& ScavTrap::operator=(const ScavTrap& other)
{
    if (this != &other)
        ClapTrap::operator=(other); // upcasting
    return *this;
}

ScavTrap::~ScavTrap()
{    
    std::cout << "ScavTrap " << _name << " destructor called" << std::endl;
}
