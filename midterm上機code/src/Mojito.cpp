#include "../include/Mojito.h"
#include "Mojito.h"
#include <stdexcept>

Mojito::Mojito() {
    this->type = "Cocktail";
    this->price = 400;
    this->alcoholContent = 30;
};

std::vector<std::string> Mojito::GetTopping() {
    return this->topping;
};

int Mojito::GetQuality() {
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