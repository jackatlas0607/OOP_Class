//
// Created by 黃漢軒 on 2023/10/30.
//

#include "Margarita.h"
#include <string>

Margarita::Margarita() {
    this->type = "Cocktail";
    this->price = 400;
    this->alcoholContent = 30;
    this->topping.push_back("Lemon");
};

std::vector<std::string> Margarita::GetTopping() {
    return this->topping;
};

int Margarita::GetQuality() {
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