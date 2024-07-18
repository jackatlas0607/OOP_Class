#ifndef OOP_Mojito_H
#define OOP_Mojito_H

#include "Exam.h"
#include <string>
#include <vector>

class Mojito : public Exam {

private:
    std::vector<std::string> topping;

public:
    Mojito();
    std::vector<std::string> GetTopping();
    virtual int GetQuality() override;
};

#endif