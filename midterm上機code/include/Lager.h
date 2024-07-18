//
// Created by 黃漢軒 on 2023/10/30.
//

#ifndef OOP_LAGER_H
#define OOP_LAGER_H

#include "Exam.h"
#include <string>

class Lager : public Exam {
public:
    Lager();
    virtual int GetQuality() override;
};

#endif // OOP_LAGER_H
