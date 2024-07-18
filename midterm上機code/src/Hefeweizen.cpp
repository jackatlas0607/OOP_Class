//
// Created by 黃漢軒 on 2023/10/30.
//

#include <string>

#include "Hefeweizen.h"

Hefeweizen::Hefeweizen() {
    this->type = "Beer";
    this->price = 400;
    this->alcoholContent = 5;
};

int Hefeweizen::GetQuality() {
    int Bs = 8;
    double As = this->alcoholContent;
    int Ts = 5;
    double Ps = (double)this->price / 100 * 10;

    double Qs = 30 * Bs + 25 * As + 20 * Ts + 25 * Ps;
    return Qs;
}