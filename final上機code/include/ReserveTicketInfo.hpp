//
// Created by 黃漢軒 on 2023/12/19.
//

#ifndef OOP_RESERVETICKETINFO_HPP
#define OOP_RESERVETICKETINFO_HPP

#include "ReserveInfo.hpp"
#include "TicketInfo.hpp"
#include "TrainInfo.hpp"

class ReserveTicketInfo : public TicketInfo {
private:
    unsigned int startStationIndex;
    unsigned int endStationIndex;

public:
    ReserveTicketInfo(unsigned int startStationIndex,
                      unsigned int endStationIndex,
                      std::shared_ptr<TrainInfo> trainInfo);

    std::string GetStartStation();
    std::string GetEndStation();
    virtual int GetPrice() override;
    ReserveInfo GetReserveInfo();
};

#endif // OOP_RESERVETICKETINFO_HPP
