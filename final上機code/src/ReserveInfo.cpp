//
// Created by 黃漢軒 on 2024/1/5.
//
#include "ReserveInfo.hpp"

ReserveInfo::ReserveInfo(int train, int seat) {
    this->train = train;
    this->seat = seat;
}

int ReserveInfo::GetTrain() {
    return this->train;
}

int ReserveInfo::GetSeat() {
    return this->seat;
}
