# CPP Module 03

*This project has been created as part of the 42 curriculum.*

## Description

The fourth C++ module: **inheritance**. A single base class is extended
step by step, showing constructor and destructor chaining, protected
members, and — in the last exercise — the diamond problem that virtual
inheritance exists to solve.

Everything is written to the **C++98** standard.

## Exercises

| Exercise | Name | Summary |
| --- | --- | --- |
| `ex00` | Aaaaand... OPEN! | The `ClapTrap` base class: hit points, energy points, attack damage, and `attack` / `takeDamage` / `beRepaired` guarded by the energy and health it has left. |
| `ex01` | Serena, my love! | `ScavTrap` derives from `ClapTrap`, overrides `attack`, adds a guard mode, and prints its own constructor and destructor messages in the right order. |
| `ex02` | Repetitive work | `FragTrap` derives from `ClapTrap` with its own stats and a positive high-five request. |

`ex03` (`DiamondTrap`) of the subject is not included in this module.

## Build & run

```bash
cd ex00 && make && ./claptrap
cd ex01 && make && ./scavtrap
cd ex02 && make && ./fragtrap
```

## Project structure

```
CPP_Module_03/
├── ex00/  ClapTrap.{hpp,cpp}, main.cpp, Makefile
├── ex01/  ClapTrap.{hpp,cpp}, ScavTrap.{hpp,cpp}, main.cpp, Makefile
└── ex02/  ClapTrap.{hpp,cpp}, ScavTrap.{hpp,cpp}, FragTrap.{hpp,cpp}, main.cpp, Makefile
```

## Notes

Constructors run base-first and destructors derived-first. The output of
these programs is mostly there to make that ordering visible — each
constructor and destructor announces itself, so running `./fragtrap` traces
the whole chain from `ClapTrap` up and back down again.
