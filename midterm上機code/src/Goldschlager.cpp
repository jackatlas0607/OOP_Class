//
// Created by 黃漢軒 on 2023/10/30.
//

#include <string>

#include "Goldschlager.h"

Goldschlager::Goldschlager() {
    this->type = "Shot";
    this->price = 200;
    this->alcoholContent = 20;
};

int Goldschlager::GetQuality() {
    int Bs = 7;
    double As = this->alcoholContent;
    int Ts = 5;
    double Ps = (double)this->price / 100 * 10;
    double Qs = 30 * Bs + 25 * As + 20 * Ts + 25 * Ps;
    return Qs;
}