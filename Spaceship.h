#ifndef SPACESHIP_H
#define SPACESHIP_H

#include <iostream>
#include <string>

class Spaceship {
private:
    std::string shipName;
    std::string captainName;
    int shieldStrength;
    int numPhasers;
    int numPhotons;

public:
    // Constructor
    Spaceship(std::string name, std::string captain, int shield, int phasers, int photons);

    // Accessor methods (getters)
    std::string getShipName() const;
    std::string getCaptainName() const;
    int getShieldStrength() const;
    int getNumPhasers() const;
    int getNumPhotons() const;

    // Take damage function
    void takeDamage(int amount);
};

#endif
