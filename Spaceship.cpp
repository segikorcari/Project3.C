#include "Spaceship.h"
// Constructor
Spaceship::Spaceship(std::string name, std::string captain, int shield, int phasers, int photons)
    : shipName(name), captainName(captain), shieldStrength(shield), numPhasers(phasers), numPhotons(photons) {}

// Getters
std::string Spaceship::getShipName() const { return shipName; }
std::string Spaceship::getCaptainName() const { return captainName; }
int Spaceship::getShieldStrength() const { return shieldStrength; }
int Spaceship::getNumPhasers() const { return numPhasers; }
int Spaceship::getNumPhotons() const { return numPhotons; }

// Take damage function
void Spaceship::takeDamage(int amount) {
    shieldStrength -= amount;
    if (shieldStrength <= 0) {
        shieldStrength = 0;
        std::cout << "Ship " << shipName << " has been destroyed!\n";
    } else {
        std::cout << "Shields are now at " << shieldStrength << " percent.\n";
    }
}
