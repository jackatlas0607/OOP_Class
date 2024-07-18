// Implement the function of Bus here.
#include "Bus.hpp"
#include <string>

Bus::Bus(std::vector<std::string> stops, std::string routeName) {
    this->stops = stops;
    this->routeName = routeName;
}

void Bus::setStops(std::vector<std::string> stops) {
    this->stops = stops;
}

void Bus::setRouteName(std::string routeName) {
    this->routeName = routeName;
}

std::vector<std::string> Bus::GetStops() {
    return this->stops;
}

std::string Bus::GetRouteName() {
    return this->routeName;
}

unsigned short Bus::GetSpeedLimit() {
    return 40;
}