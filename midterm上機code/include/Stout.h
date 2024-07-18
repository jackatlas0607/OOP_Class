#ifndef OOP_Stout_H
#define OOP_Stout_H
#include "Exam.h"
#include <string>

class Stout : public Exam {
public:
    Stout();
    virtual int GetQuality() override;
};

#endif