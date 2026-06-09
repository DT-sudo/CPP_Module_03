#include "ClapTrap.hpp"

void ClapTrap::attack(const std::string& target)
{
    if (_hit_points == 0)
    {
        std::cout << "ClapTrap " << _name <<  " is already dead and can't attack nobody" << std::endl;
        return;
    }
    if (_energy > 0)
    {
        _energy -= 1;
        std::cout << "ClapTrap " << _name << " just has attacked " << target <<": -"
        << _damage << " health points" << std::endl;
    }
    else
        std::cout << "ClapTrap " << _name << " has no energy to attack " << target << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
    if (_hit_points == 0)
    {
        std::cout << "ClapTrap " << _name << " is already dead and can't take damage no more." << std::endl;
        return;
    }
    std::cout << "ClapTrap " << _name << " takes " << amount << std::endl;
    if (amount >= _hit_points)
    {
        _hit_points = 0;
        std::cout << "ClapTrap " << _name << " is dead." << std::endl;
    }
    else
        _hit_points -= amount;
}

void ClapTrap::beRepaired(unsigned int amount)
{
    if (_hit_points == 0)
    {
        std::cout << "ClapTrap " << _name <<  " is already dead and can't heal himself" << std::endl;
        return;
    }
    if (_energy > 0)
    {
        _energy -= 1;
        _hit_points += amount;
        std::cout << "ClapTrap " << _name <<  " healed himself with " << amount << " points.\nHealth points: "
        << _hit_points << ". Energy points left: " << _energy << std::endl;
    }
    else 
        std::cout << "ClapTrap " << _name << " has no energy to repair itself" << std::endl;

}

ClapTrap::ClapTrap(): _name("default"), _hit_points(10), _energy(10), _damage(0)
{
    std::cout << "ClapTrap " << _name << " default constructor called" << std::endl;
}

ClapTrap::ClapTrap(std::string name): _name(name), _hit_points(10), _energy(10), _damage(0)
{
    std::cout << "ClapTrap " << _name << " constructor called" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap& other)
{
    std::cout << "ClapTrap copy constructor called" << std::endl;
    *this = other;
}

ClapTrap& ClapTrap::operator=(const ClapTrap& other)
{
    if (this != &other)
    {
        this->_name = other._name;
        this->_damage = other._damage;
        this->_energy = other._energy;
        this->_hit_points = other._hit_points;
    }
    return *this;
}

ClapTrap::~ClapTrap()
{
    std::cout << "ClapTrap " << _name << " destructor called" << std::endl;
}
 
