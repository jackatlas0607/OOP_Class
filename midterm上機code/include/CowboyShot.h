//
// Created by 黃漢軒 on 2023/10/30.
//

#ifndef OOP_COWBOYSHOT_H
#define OOP_COWBOYSHOT_H

#include "Exam.h"
#include <string>

class CowboyShot : public Exam {
public:
    CowboyShot();
    virtual int GetQuality() override;
};

#endif // OOP_COWBOYSHOT_H
