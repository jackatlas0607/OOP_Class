//
// Created by sigtu on 1/2/2024.
//

#include "LocalTrain.hpp"
#include "TicketInfo.hpp"

TicketInfo LocalTrain::GetTicket() {
    return TicketInfo(this->GetTrainInfo());
}
