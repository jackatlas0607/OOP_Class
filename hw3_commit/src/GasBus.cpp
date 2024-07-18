// Implement the function of GasBus here.
#include "GasBus.hpp"
#include <stdexcept>

GasBus::GasBus(std::vector<std::string> stops, std::string routeName,
               unsigned int gas)
    : Bus(stops, routeName) {
    this->gas = gas;
}

unsigned int GasBus::GetGas() {
    return this->gas;
}

void GasBus::SetGas(unsigned int gas) {
    this->gas = gas;
}

unsigned int GasBus::GetPrice(int stopNumber) {
    if (stopNumber < 0) {
        throw std::invalid_argument("Input stopNumber is lower than zero.");
    }

    if (stopNumber <= 30) {
        return 450;
    } else {
        return (unsigned int)(450 + 5 * (stopNumber - 30));
    }
}