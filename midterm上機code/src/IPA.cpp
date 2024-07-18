//
// Created by 黃漢軒 on 2023/10/30.
//

#include <string>

#include "IPA.h"

IPA::IPA() {
    this->type = "Beer";
    this->price = 600;
    this->alcoholContent = 5;
};

int IPA::GetQuality() {
    int Bs = 8;
    double As = this->alcoholContent;
    int Ts = 5;
    double Ps = (double)this->price / 100 * 10;

    double Qs = 30 * Bs + 25 * As + 20 * Ts + 25 * Ps;
    return Qs;
}