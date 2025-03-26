#include <iostream>
#include <fstream>
#include <vector>
#include "Spaceship.h"

int main() {
    std::vector<Spaceship*> fleet;
    std::ifstream inputFile("ships.txt");

    if (!inputFile) {
        std::cerr << "Error opening file!" << std::endl;
        return 1;
    }

    std::string name, captain;
    int shield, phasers, photons;

    // Read file and create spaceship objects
    while (inputFile >> name >> captain >> shield >> phasers >> photons) {
        Spaceship* ship = new Spaceship(name, captain, shield, phasers, photons);
        fleet.push_back(ship);
    }
    inputFile.close();

    // Display details and apply damage
    for (Spaceship* ship : fleet) {
        std::cout << "Starship " << ship->getShipName() << " is captained by " << ship->getCaptainName() << ".\n";
        std::cout << "It has shield strength of " << ship->getShieldStrength() << ", "
                  << ship->getNumPhasers() << " phasers, and " << ship->getNumPhotons() << " photon torpedoes.\n";
        
        std::cout << ">>> " << ship->getShipName() << " was hit with an attack of 10.\n";
        ship->takeDamage(10);
        std::cout << std::endl;
    }

    // Free allocated memory
    for (Spaceship* ship : fleet) {
        delete ship;
    }
    fleet.clear();

    return 0;
}
