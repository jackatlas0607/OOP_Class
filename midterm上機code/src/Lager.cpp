//
// Created by 黃漢軒 on 2023/10/30.
//

#include "Lager.h"
#include <stdexcept>
#include <string>

Lager::Lager() {
    this->type = "Beer";
    this->price = 300;
    this->alcoholContent = 5;
};

int Lager::GetQuality() {
    int Bs = 8;
    double As = this->alcoholContent;
    int Ts = 5;
    double Ps = (double)this->price / 100 * 10;

    double Qs = 30 * Bs + 25 * As + 20 * Ts + 25 * Ps;
    return Qs;
}