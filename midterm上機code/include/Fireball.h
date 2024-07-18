//
// Created by 黃漢軒 on 2023/10/30.
//

#ifndef OOP_FIREBALL_H
#define OOP_FIREBALL_H

#include "Exam.h"
#include <string>

class Fireball : public Exam {
public:
    Fireball();
    virtual int GetQuality() override;
};

#endif // OOP_FIREBALL_H
