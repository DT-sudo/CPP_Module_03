#include "ClapTrap.hpp"

int main(void)
{
    std::string l = "Bobek";
    ClapTrap a("Suslik");
    ClapTrap b(a);
    // ClapTrap b = a;

    for (int i = 0; i < 6; i++)
    {
        a.attack(l);
        a.takeDamage(3);
        a.beRepaired(1);
    }
    for (int i = 0; i < 11; i++)
        b.takeDamage(1);

    return 0;
}