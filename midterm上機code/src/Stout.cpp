#include "../include/Stout.h"
#include <stdexcept>

Stout::Stout() {
    this->type = "Beer";
    this->price = 500;
    this->alcoholContent = 5;
};

int Stout::GetQuality() {
    int Bs = 8;
    double As = this->alcoholContent;
    int Ts = 5;
    double Ps = (double)this->price / 100 * 10;

    double Qs = 30 * Bs + 25 * As + 20 * Ts + 25 * Ps;
    return Qs;
}
