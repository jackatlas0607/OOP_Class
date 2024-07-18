//
// Created by 黃漢軒 on 2023/12/18.
//

#ifndef OOP_TOURISTTRAIN_HPP
#define OOP_TOURISTTRAIN_HPP

#include "IReservable.hpp"
#include "Train.hpp"

class TouristTrain : public Train, IReservable {

public:
    TouristTrain(std::shared_ptr<TrainInfo> trainInfo,
                 std::shared_ptr<EnergyInfo> energyInfo)
        : Train(trainInfo, energyInfo) {}

    virtual ReserveTicketInfo Reserve(int startStationIndex,
                                      int endStationIndex) override;
};

#endif // OOP_TOURISTTRAIN_HPP
