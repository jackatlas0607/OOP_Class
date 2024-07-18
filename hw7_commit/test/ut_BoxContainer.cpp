//
// Created by 黃漢軒 on 2023/12/22.
//

#include "../include/BoxContainer.hpp"
#include "BoxContainer.hpp"

#include <gtest/gtest.h>

// Implement tests here.
TEST(BoxContainerTest, TestSquare) {
    std::vector<Point> points;
    points.push_back(Point(0, 10));
    points.push_back(Point(10, 10));
    points.push_back(Point(0, 0));
    points.push_back(Point(0, 10));
    BoxContainer boxContainer(points);
    ASSERT_EQ(boxContainer.GetX(), 0);
    ASSERT_EQ(boxContainer.GetY(), 10);
    ASSERT_EQ(boxContainer.GetWidth(), 10);
    ASSERT_EQ(boxContainer.GetHeight(), 10);
}

TEST(BoxContainerTest, TestCircle) {
    BoxContainer boxContainer(Point(0, 0), 10);
    ASSERT_EQ(boxContainer.GetX(), -10);
    ASSERT_EQ(boxContainer.GetY(), 10);
    ASSERT_EQ(boxContainer.GetWidth(), 20);
    ASSERT_EQ(boxContainer.GetHeight(), 20);
}