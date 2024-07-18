//
// Created by 黃漢軒 on 2023/10/30.
//

#ifndef OOP_CRAFTBEER_H
#define OOP_CRAFTBEER_H

#include "Exam.h"
#include <string>

class CraftBeer : public Exam {
public:
    CraftBeer();
    virtual int GetQuality() override;
};

#endif // OOP_CRAFTBEER_H
