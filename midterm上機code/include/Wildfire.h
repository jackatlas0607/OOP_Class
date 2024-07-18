//
// Created by 黃漢軒 on 2023/10/30.
//

#ifndef OOP_WILDFIRE_H
#define OOP_WILDFIRE_H

#include "Exam.h"
#include <string>
#include <vector>

class Wildfire : public Exam {
private:
    std::vector<std::string> topping;

public:
    Wildfire();
    std::vector<std::string> GetTopping();
    virtual int GetQuality() override;
};

#endif // OOP_WILDFIRE_H
