//
// Created by 黃漢軒 on 2023/10/30.
//

#ifndef OOP_MARGARITA_H
#define OOP_MARGARITA_H

#include "Exam.h"
#include <string>
#include <vector>

class Margarita : public Exam {
private:
    std::vector<std::string> topping;

public:
    Margarita();
    std::vector<std::string> GetTopping();
    virtual int GetQuality() override;
};

#endif // OOP_MARGARITA_H
