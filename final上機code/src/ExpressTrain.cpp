//
// Created by sigtu on 1/2/2024.
//

#include "ExpressTrain.hpp"
#include "ReserveTicketInfo.hpp"

ReserveTicketInfo ExpressTrain::Reserve(int startStationIndex,
                                        int endStationIndex) {
    return ReserveTicketInfo(startStationIndex, endStationIndex,
                             this->GetTrainInfo());
}
