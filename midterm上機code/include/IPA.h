//
// Created by 黃漢軒 on 2023/10/30.
//

#ifndef OOP_IPA_H
#define OOP_IPA_H

#include "Exam.h"
#include <string>

class IPA : public Exam {
public:
    IPA();
    virtual int GetQuality() override;
};

#endif // OOP_IPA_H
