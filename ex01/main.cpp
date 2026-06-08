#include "ScavTrap.hpp"

int main(void)
{
    std::cout << "--- Construction chain ---" << std::endl;
    ScavTrap scav("Soso");

    std::cout << "\n--- ScavTrap actions ---" << std::endl;
    scav.attack("kiki");
    scav.guardGate();
    scav.takeDamage(30);
    scav.beRepaired(10);

    std::cout << "\n--- Death test ---" << std::endl;
    scav.takeDamage(200);
    scav.attack("enemy");
    scav.beRepaired(10);

    std::cout << "\n--- Copy constructor test ---" << std::endl;
    ScavTrap copy(scav);

    std::cout << "\n--- Destruction chain ---" << std::endl;
    return 0;
}