//
// Created by sigtu on 1/2/2024.
//
#include "ElectricEnergy.hpp"

int ElectricEnergy::GetDistance() {
    CalculateHelper calculateHelper;
    return calculateHelper.CalculateElectricDistance(this->GetEnergy());
}

int ElectricEnergy::GetTerminalStationArrivalTimeInSecond() {
    CalculateHelper calculateHelper;
    return calculateHelper.CalculateElectricArrivalTime(this->GetEnergy());
}