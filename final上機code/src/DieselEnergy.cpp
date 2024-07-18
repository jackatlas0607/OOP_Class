//
// Created by sigtu on 1/2/2024.
//

#include "DieselEnergy.hpp"

int DieselEnergy::GetDistance() {
    CalculateHelper calculateHelper;
    return calculateHelper.CalculateDieselDistance(this->GetEnergy());
}

int DieselEnergy::GetTerminalStationArrivalTimeInSecond() {
    CalculateHelper calculateHelper;
    return calculateHelper.CalculateDieselArrivalTime(this->GetEnergy());
}