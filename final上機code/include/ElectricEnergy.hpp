//
// Created by 黃漢軒 on 2023/12/18.
//

#ifndef OOP_ELECTRICENERGY_HPP
#define OOP_ELECTRICENERGY_HPP

#include "CalculateHelper.hpp"
#include "EnergyInfo.hpp"
#include "ICalculable.hpp"

class ElectricEnergy : public EnergyInfo {
public:
    ElectricEnergy(int energy)
        : EnergyInfo(energy) {}

    virtual int GetDistance() override;

    virtual int GetTerminalStationArrivalTimeInSecond() override;
};

#endif // OOP_ELECTRICENERGY_HPP
