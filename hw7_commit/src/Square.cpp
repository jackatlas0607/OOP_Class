//
// Created by 黃漢軒 on 2023/12/12.
//

#include "../include/Square.hpp"
#include "../include/ShapeHelper.hpp"

Square::Square(Location location, int edge)
    : edge(edge),
      location(location) {}

double Square::GetArea() {
    return this->edge * this->edge;
}

Point Square::GetLeftTopPoint() {
    // location 為方形左上角
    return this->location;
}

bool Square::IsInShape(Point point) {
    return ShapeHelper().IsPointInSquare(this->location.GetX(),
                                         this->location.GetY(), this->edge,
                                         point.GetX(), point.GetY());
}

bool Square::IsOverlap(std::shared_ptr<IDrawable> drawable) {
    return ShapeHelper().IsBoxOverlap(this->GetBoxContainer(),
                                      drawable->GetBoxContainer());
}

BoxContainer Square::GetBoxContainer() {
    std::vector<Point> points;
    points.push_back(this->location);
    points.push_back(
        Point(this->location.GetX() + this->edge, this->location.GetY()));
    points.push_back(
        Point(this->location.GetX(), this->location.GetY() - edge));
    points.push_back(Point(this->location.GetX() + this->edge,
                           this->location.GetY() - this->edge));
    return BoxContainer(points);
}

int Square::GetEdge() {
    return this->edge;
}