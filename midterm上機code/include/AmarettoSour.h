//
// Created by 黃漢軒 on 2023/10/30.
//

#ifndef OOP_AMARETTOSOUR_H
#define OOP_AMARETTOSOUR_H

#include "Exam.h"
#include <string>
#include <vector>

class AmarettoSour : public Exam {
private:
    std::vector<std::string> topping;

public:
    AmarettoSour();
    std::vector<std::string> GetTopping();
    virtual int GetQuality() override;
};

#endif // OOP_AMARETTOSOUR_H
