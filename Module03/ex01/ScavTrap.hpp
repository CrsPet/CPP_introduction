#ifndef SCAV_TRAP_HPP
# define SCAV_TRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap {

public:
    ScavTrap();
    ScavTrap( std::string );
    ~ScavTrap();
    void attack( const std::string & );
    void guardGate();
};

#endif