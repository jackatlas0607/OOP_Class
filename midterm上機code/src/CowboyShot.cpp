//
// Created by 黃漢軒 on 2023/10/30.
//

#include <string>

#include "CowboyShot.h"

CowboyShot::CowboyShot() {
    this->type = "Shot";
    this->price = 600;
    this->alcoholContent = 30;
};

int CowboyShot::GetQuality() {
    int Bs = 7;
    double As = this->alcoholContent;
    int Ts = 5;
    double Ps = (double)this->price / 100 * 10;
    double Qs = 30 * Bs + 25 * As + 20 * Ts + 25 * Ps;
    return Qs;
}