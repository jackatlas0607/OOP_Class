//
// Created by 黃漢軒 on 2023/12/18.
//

#ifndef OOP_DIESELENERGY_HPP
#define OOP_DIESELENERGY_HPP

#include "CalculateHelper.hpp"
#include "EnergyInfo.hpp"
#include "ICalculable.hpp"

class DieselEnergy : public EnergyInfo {
public:
    DieselEnergy(int energy)
        : EnergyInfo(energy) {}

    virtual int GetDistance() override;
    virtual int GetTerminalStationArrivalTimeInSecond() override;
};

#endif // OOP_DIESELENERGY_HPP
