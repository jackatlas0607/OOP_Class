// Implement the function of ElectricBus here.
#include "ElectricBus.hpp"
#include <stdexcept>

ElectricBus::ElectricBus(std::vector<std::string> stops, std::string routeName,
                         unsigned short electricityPercentage)
    : Bus(stops, routeName) {

    if (electricityPercentage > 100) {
        throw std::invalid_argument(
            "electricityPercentage is larger than 100%.");
    }

    this->electricityPercentage = electricityPercentage;
}

unsigned short ElectricBus::GetElectricityPercentage() {
    return this->electricityPercentage;
}

void ElectricBus::SetElectricityPercentage(unsigned short electricity) {
    if (electricity > 100) {
        throw std::invalid_argument(
            "electricityPercentage is larger than 100%.");
    }

    this->electricityPercentage = electricity;
}

unsigned int ElectricBus::GetPrice(int stopNumber) {
    if (stopNumber < 0) {
        throw std::invalid_argument("Input stopNumber is lower than zero.");
    }

    if (stopNumber <= 20) {
        return 150;
    } else {
        return (unsigned int)(150 + 10 * (stopNumber - 20));
    }
}
