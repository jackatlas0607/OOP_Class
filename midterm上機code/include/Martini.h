//
// Created by 黃漢軒 on 2023/10/30.
//

#ifndef OOP_MARTINI_H
#define OOP_MARTINI_H

#include "Exam.h"
#include <string>
#include <vector>

class Martini : public Exam {
private:
    std::vector<std::string> topping;

public:
    Martini();
    std::vector<std::string> GetTopping();
    virtual int GetQuality() override;
};

#endif // OOP_MARTINI_H
