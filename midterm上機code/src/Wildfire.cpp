//
// Created by 黃漢軒 on 2023/10/30.
//

#include "Wildfire.h"
#include <stdexcept>
#include <string>

Wildfire::Wildfire() {
    this->type = "Cocktail";
    this->price = 300;
    this->alcoholContent = 30;
    this->topping.push_back("CinnamonWhiskey");
    this->topping.push_back("AppleJuice");
};

std::vector<std::string> Wildfire::GetTopping() {
    return this->topping;
};

int Wildfire::GetQuality() {
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