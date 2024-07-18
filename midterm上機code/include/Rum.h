#ifndef OOP_Rum_H
#define OOP_Rum_H
#include "Exam.h"
#include <string>

class Rum : public Exam {
public:
    Rum();
    virtual int GetQuality() override;
};

#endif
