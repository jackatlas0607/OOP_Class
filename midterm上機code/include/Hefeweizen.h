//
// Created by 黃漢軒 on 2023/10/30.
//

#ifndef OOP_HEFEWEIZEN_H
#define OOP_HEFEWEIZEN_H

#include "Exam.h"
#include <string>

class Hefeweizen : public Exam {
public:
    Hefeweizen();
    virtual int GetQuality() override;
};

#endif // OOP_HEFEWEIZEN_H
