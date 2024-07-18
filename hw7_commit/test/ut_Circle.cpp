//
// Created by 黃漢軒 on 2023/12/22.
//

#include "../include/Circle.hpp"
#include "../include/IDrawable.hpp"
#include "../include/Location.hpp"
#include "../include/Point.hpp"

#include <gtest/gtest.h>
#include <memory>

// Implement tests here.
TEST(CircleTest, Test_GetArea) {
    Circle circle(Location(0, 0), 10);
    ASSERT_EQ(circle.GetArea(), 314);
}

TEST(CircleTest, Test_GetLeftTopPoint) {
    Circle circle(Location(0, 0), 10);
    ASSERT_EQ(circle.GetLeftTopPoint().GetX(), -10);
    ASSERT_EQ(circle.GetLeftTopPoint().GetY(), 10);
}

TEST(CircleTest, Test_IsInShape) {
    Circle circle(Location(0, 0), 10);
    ASSERT_FALSE(circle.IsInShape(Point(12, 12)));
}

TEST(CircleTest, Test_IsOverlap1) {
    std::shared_ptr<IDrawable> circle1 =
        std::make_shared<Circle>(Location(0, 0), 10);
    std::shared_ptr<IDrawable> circle2 =
        std::make_shared<Circle>(Location(0, 0), 5);
    ASSERT_FALSE(!circle1->IsOverlap(circle2));
}

TEST(CircleTest, Test_IsOverlap2) {
    std::shared_ptr<IDrawable> circle1 =
        std::make_shared<Circle>(Location(0, 0), 10);
    std::shared_ptr<IDrawable> circle2 =
        std::make_shared<Circle>(Location(20, 0), 5);
    ASSERT_FALSE(circle1->IsOverlap(circle2));
}

TEST(CircleTest, Test_GetBoxContainer) {
    Circle circle(Location(0, 0), 10);
    ASSERT_EQ(circle.GetBoxContainer().GetX(), -10);
    ASSERT_EQ(circle.GetBoxContainer().GetY(), 10);
    ASSERT_EQ(circle.GetBoxContainer().GetWidth(), 20);
    ASSERT_EQ(circle.GetBoxContainer().GetHeight(), 20);
}

TEST(CircleTest, Test_GetRadius) {
    Circle circle(Location(0, 0), 10);
    ASSERT_EQ(circle.GetRadius(), 10);
}
