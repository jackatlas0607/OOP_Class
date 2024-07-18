//
// Created by sigtu on 1/2/2024.
//
#include "TouristTrain.hpp"

ReserveTicketInfo TouristTrain::Reserve(int startStationIndex,
                                        int endStationIndex) {
    return ReserveTicketInfo(startStationIndex, endStationIndex,
                             this->GetTrainInfo());
}
