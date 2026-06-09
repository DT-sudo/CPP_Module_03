#include "FragTrap.hpp"

int main(void)
{
    std::cout << "--- Construction chain ---" << std::endl;
    FragTrap frag("Fifi");

    std::cout << "\n--- FragTrap actions ---" << std::endl;
    frag.attack("kiki");
    frag.highFivesGuys();
    frag.takeDamage(30);
    frag.beRepaired(10);

    std::cout << "\n--- Death test ---" << std::endl;
    frag.takeDamage(200);
    frag.attack("enemy");
    frag.beRepaired(10);

    std::cout << "\n--- Copy constructor test ---" << std::endl;
    FragTrap copy(frag);

    std::cout << "\n--- Destruction chain ---" << std::endl;
    return 0;
}
