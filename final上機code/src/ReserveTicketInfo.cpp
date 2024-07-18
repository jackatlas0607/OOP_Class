//
// Created by 黃漢軒 on 2024/1/5.
//
#include "ReserveTicketInfo.hpp"
#include "ReserveInfo.hpp"
#include "TicketInfo.hpp"
#include "TrainInfo.hpp"
#include <string>

ReserveTicketInfo::ReserveTicketInfo(unsigned int startStationIndex,
                                     unsigned int endStationIndex,
                                     std::shared_ptr<TrainInfo> trainInfo)
    : TicketInfo(trainInfo) {
    this->startStationIndex = startStationIndex;
    this->endStationIndex = endStationIndex;
}

std::string ReserveTicketInfo::GetStartStation() {
    return this->GetTrainInfo()->GetStation(this->startStationIndex);
}

std::string ReserveTicketInfo::GetEndStation() {
    return this->GetTrainInfo()->GetStation(this->endStationIndex);
}

int ReserveTicketInfo::GetPrice() {
    int stationCount;
    if ((this->endStationIndex - this->startStationIndex) > 0) {
        stationCount = this->endStationIndex - this->startStationIndex;
    } else {
        stationCount = -(this->endStationIndex - this->startStationIndex);
    }
    return this->GetTrainInfo()->GetPricePerStation() * (stationCount);
}

ReserveInfo ReserveTicketInfo::GetReserveInfo() {
    return this->GetTrainInfo()->ReserveSeat();
}