//
// Created by 黃漢軒 on 2023/12/19.
//

#ifndef OOP_ENERGYINFO_HPP
#define OOP_ENERGYINFO_HPP

#include "ICalculable.hpp"

class EnergyInfo : public ICalculable {
private:
    int energy;

public:
    EnergyInfo(int energy);
    int GetEnergy();
    virtual int GetDistance() override;
    virtual int GetTerminalStationArrivalTimeInSecond() override;
};

#endif // OOP_ENERGYINFO_HPP
