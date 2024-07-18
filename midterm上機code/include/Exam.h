#ifndef OOP_Exam_H
#define OOP_Exam_H
#include <string>

class Exam {
protected:
    std::string type;
    int price;
    int alcoholContent;

public:
    // Exam(std::string type, int price, double alcoholContent);
    std::string GetType();
    int GetAlcoholContent();
    int GetPrice();
    void SetAlcoholContent(int alcoholContent);
    virtual int GetQuality() = 0;
};

#endif