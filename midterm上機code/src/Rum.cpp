#include "../include/Rum.h"
#include <stdexcept>

Rum::Rum() {
    this->type = "Shot";
    this->price = 800;
    this->alcoholContent = 60;
};

int Rum::GetQuality() {
    int Bs = 7;
    double As = this->alcoholContent;
    int Ts = 5;
    double Ps = (double)this->price / 100 * 10;
    double Qs = 30 * Bs + 25 * As + 20 * Ts + 25 * Ps;
    return Qs;
}