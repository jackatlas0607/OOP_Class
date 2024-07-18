#include "EnergyInfo.hpp"

EnergyInfo::EnergyInfo(int energy) {
    this->energy = energy;
}

int EnergyInfo::GetEnergy() {
    return this->energy;
}

int EnergyInfo::GetDistance() {
    return 0;
}

int EnergyInfo::GetTerminalStationArrivalTimeInSecond() {
    return 0;
}