//
// Created by 黃漢軒 on 2023/10/30.
//

#ifndef OOP_GOLDSCHLAGER_H
#define OOP_GOLDSCHLAGER_H

#include "Exam.h"
#include <string>

class Goldschlager : public Exam {
public:
    Goldschlager();
    virtual int GetQuality() override;
};

#endif // OOP_GOLDSCHLAGER_H
