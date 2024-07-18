#include "../include/Exam.h"
#include <stdexcept>

// Exam::Exam(std::string type, int price, double alcoholContent)
//     : type(type),
//       price(price),
//       alcoholContent(alcoholContent) {}

std::string Exam::GetType() {
    return this->type;
};

int Exam::GetAlcoholContent() {
    return this->alcoholContent;
}

int Exam::GetPrice() {
    return this->price;
}

void Exam::SetAlcoholContent(int alcoholContent) {
    if (alcoholContent > 100) {
        throw std::invalid_argument("alcoholContent is larger than 100%");
    } else if (alcoholContent < 0) {
        throw std::invalid_argument("alcoholContent is lower than 100%");
    }

    this->alcoholContent = alcoholContent;
}