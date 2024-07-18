//
// Created by 黃漢軒 on 2023/10/30.
//

#ifndef OOP_TEQUILA_H
#define OOP_TEQUILA_H

#include "Exam.h"
#include <string>

class Tequila : public Exam {
public:
    Tequila();
    virtual int GetQuality() override;
};

#endif // OOP_TEQUILA_H
