#include "Train.hpp"
#include "EnergyInfo.hpp"
#include "TrainInfo.hpp"

Train::Train(std::shared_ptr<TrainInfo> trainInfo,
             std::shared_ptr<EnergyInfo> energyInfo) {
    this->trainInfo = trainInfo;
    this->energyInfo = energyInfo;
}

std::shared_ptr<TrainInfo> Train::GetTrainInfo() {
    return this->trainInfo;
}

std::shared_ptr<EnergyInfo> Train::GetEnergyInfo() {
    return this->energyInfo;
}