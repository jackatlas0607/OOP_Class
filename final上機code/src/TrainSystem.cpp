//
// Created by sigtu on 1/2/2024.
//

#include "TrainSystem.hpp"

TrainSystem::TrainSystem(std::vector<std::shared_ptr<Train>> trains) {
    this->trains = trains;
}

std::shared_ptr<Train> TrainSystem::GetTrain(int index) {
    return this->trains[index];
}

int TrainSystem::GetTotalDistance() {
    int sum = 0;
    for (unsigned int i = 0; i < this->trains.size(); i++) {
        sum += this->trains[i]->GetEnergyInfo()->GetDistance();
    }
    return sum;
}

int TrainSystem::GetTotalArrivalTime() {
    int sum = 0;
    for (unsigned int i = 0; i < this->trains.size(); i++) {
        sum += this->trains[i]
                   ->GetEnergyInfo()
                   ->GetTerminalStationArrivalTimeInSecond();
    }
    return sum;
}

int TrainSystem::GetSize() {
    return this->trains.size();
}