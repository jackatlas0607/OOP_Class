//
// Created by 黃漢軒 on 2023/12/12.
//

#include "../include/Circle.hpp"
#include "../include/ShapeHelper.hpp"

Circle::Circle(Location location, int radius)
    : radius(radius),
      location(location) {}

double Circle::GetArea() {
    return this->radius * this->radius * 3.14;
}

Point Circle::GetLeftTopPoint() {
    // location 為圓心
    return Point(this->location.GetX() - this->radius,
                 this->location.GetY() + this->radius);
}

bool Circle::IsInShape(Point point) {
    return ShapeHelper().IsPointInCircle(this->location.GetX(),
                                         this->location.GetY(), this->radius,
                                         point.GetX(), point.GetY());
}

bool Circle::IsOverlap(std::shared_ptr<IDrawable> drawable) {
    return ShapeHelper().IsBoxOverlap(this->GetBoxContainer(),
                                      drawable->GetBoxContainer());
}

BoxContainer Circle::GetBoxContainer() {
    return BoxContainer(this->location, this->radius);
}

int Circle::GetRadius() {
    return this->radius;
}