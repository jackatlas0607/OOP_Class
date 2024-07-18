//
// Created by 黃漢軒 on 2024/1/5.
//
#include "TicketInfo.hpp"

TicketInfo::TicketInfo(std::shared_ptr<TrainInfo> trainInfo) {
    this->trainInfo = trainInfo;
}

std::shared_ptr<TrainInfo> TicketInfo::GetTrainInfo() {
    return this->trainInfo;
}

int TicketInfo::GetPrice() {
    return this->trainInfo->GetPricePerStation();
}