// Implement the function of MaglevBus here.
#include "MaglevBus.hpp"
#include <stdexcept>

MaglevBus::MaglevBus(std::vector<std::string> stops, std::string routeName,
                     unsigned short electricityPercentage)
    : Bus(stops, routeName) {

    if (electricityPercentage > 100) {
        throw std::invalid_argument(
            "electricityPercentage is larger than 100%.");
    }

    this->electricityPercentage = electricityPercentage;
}

unsigned short MaglevBus::GetElectricityPercentage() {
    return this->electricityPercentage;
}

void MaglevBus::SetElectricityPercentage(unsigned short electricity) {
    if (electricity > 100) {
        throw std::invalid_argument(
            "electricityPercentage is larger than 100%.");
    }

    this->electricityPercentage = electricity;
}

unsigned short MaglevBus::GetSpeedLimit() {
    return 80;
}

unsigned int MaglevBus::GetPrice(int stopNumber) {
    if (stopNumber < 0) {
        throw std::invalid_argument("Input stopNumber is lower than zero.");
    }

    if (stopNumber <= 10) {
        return 750;
    } else {
        return (unsigned int)(750 + 15 * (stopNumber - 10));
    }
}