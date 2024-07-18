//
// Created by 黃漢軒 on 2023/12/22.
//

#include "BoxContainer.hpp"
#include "Circle.hpp"
#include "IDrawable.hpp"
#include "Location.hpp"
#include "Square.hpp"

#include <gtest/gtest.h>
#include <memory>

// Implement tests here.
TEST(SquareTest, Test_GetArea) {
    Square square(Location(0, 10), 10);
    ASSERT_EQ(square.GetArea(), 100);
}

TEST(SquareTest, Test_GetLeftTopPoint) {
    Square square(Location(0, 10), 10);
    ASSERT_EQ(square.GetLeftTopPoint().GetX(), 0);
    ASSERT_EQ(square.GetLeftTopPoint().GetY(), 10);
}

TEST(SquareTest, Test_IsInShape) {
    Square square(Location(0, 10), 10);
    ASSERT_FALSE(square.IsInShape(Point(12, 12)));
}

TEST(SquareTest, Test_IsOverlap1) {
    Square square1(Location(0, 10), 10);
    std::shared_ptr<IDrawable> square2 =
        std::make_shared<Square>(Location(0, 5), 5);
    ASSERT_FALSE(!square1.IsOverlap(square2));
}

TEST(SquareTest, Test_IsOverlap2) {
    Square square1(Location(0, 10), 10);
    std::shared_ptr<IDrawable> square2 =
        std::make_shared<Square>(Location(15, 15), 5);
    ASSERT_FALSE(square1.IsOverlap(square2));
}

TEST(SquareTest, Test_GetBoxContainer) {
    Square square(Location(0, 10), 10);
    BoxContainer boxContainer = square.GetBoxContainer();
    ASSERT_EQ(boxContainer.GetX(), 0);
    ASSERT_EQ(boxContainer.GetY(), 10);
    ASSERT_EQ(boxContainer.GetWidth(), 10);
    ASSERT_EQ(boxContainer.GetHeight(), 10);
}

TEST(SquareTest, Test_GetEdge) {
    Square square(Location(0, 10), 10);
    ASSERT_EQ(square.GetEdge(), 10);
}