//
// Created by 黃漢軒 on 2023/10/30.
//
#include "Martini.h"
#include <stdexcept>

Martini::Martini() {
    this->type = "Cocktail";
    this->price = 500;
    this->alcoholContent = 30;
};

std::vector<std::string> Martini::GetTopping() {
    return this->topping;
};

int Martini::GetQuality() {
    int Bs = 10;
    double As = this->alcoholContent;
    int Ts = 5;
    if (!this->topping.empty()) {
        Ts = 10;
    }

    double Ps = (double)this->price / 100 * 10;

    double Qs = 30 * Bs + 25 * As + 20 * Ts + 25 * Ps;
    return Qs;
}