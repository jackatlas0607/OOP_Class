//
// Created by 黃漢軒 on 2023/12/22.
//

#include <gtest/gtest.h>
#include <memory>
#include <stdexcept>
#include <vector>

#include "../include/Circle.hpp"
#include "../include/GraphicSystem.hpp"
#include "../include/IDrawable.hpp"
#include "../include/Square.hpp"
#include "GraphicSystem.hpp"

// Implement tests here.
TEST(GraphicSystemTest, Test_Constructor) {
    std::shared_ptr<IDrawable> circle1 =
        std::make_shared<Circle>(Location(0, 0), 10);

    std::shared_ptr<IDrawable> circle2 =
        std::make_shared<Circle>(Location(0, 0), 5);

    std::vector<std::shared_ptr<IDrawable>> graphics;
    graphics.push_back(circle1);
    graphics.push_back(circle2);
    ASSERT_THROW(GraphicSystem system(graphics), std::logic_error);
}

TEST(GraphicSystemTest, Test_AddShape) {
    std::shared_ptr<IDrawable> circle1 =
        std::make_shared<Circle>(Location(0, 0), 10);

    std::shared_ptr<IDrawable> circle2 =
        std::make_shared<Circle>(Location(0, 0), 5);

    std::vector<std::shared_ptr<IDrawable>> graphics;
    graphics.push_back(circle1);
    GraphicSystem system(graphics);
    ASSERT_THROW(system.AddShape(circle2), std::logic_error);
}

TEST(GraphicSystemTest, Test_GetShape1) {
    std::shared_ptr<IDrawable> circle1 =
        std::make_shared<Circle>(Location(0, 0), 10);

    std::shared_ptr<IDrawable> circle2 =
        std::make_shared<Circle>(Location(20, 0), 5);

    std::vector<std::shared_ptr<IDrawable>> graphics;
    graphics.push_back(circle1);
    graphics.push_back(circle2);
    GraphicSystem system(graphics);
    ASSERT_EQ(system.GetShape(0)->GetArea(), 314);
}

TEST(GraphicSystemTest, Test_GetShape2) {
    std::shared_ptr<IDrawable> circle1 =
        std::make_shared<Circle>(Location(0, 0), 10);

    std::shared_ptr<IDrawable> circle2 =
        std::make_shared<Circle>(Location(20, 0), 5);

    std::vector<std::shared_ptr<IDrawable>> graphics;
    graphics.push_back(circle1);
    graphics.push_back(circle2);
    GraphicSystem system(graphics);
    ASSERT_THROW(system.GetShape(3), std::invalid_argument);
}

TEST(GraphicSystemTest, Test_GetShape3) {
    std::shared_ptr<IDrawable> circle1 =
        std::make_shared<Circle>(Location(0, 0), 10);

    std::shared_ptr<IDrawable> circle2 =
        std::make_shared<Circle>(Location(20, 0), 5);

    std::vector<std::shared_ptr<IDrawable>> graphics;
    graphics.push_back(circle1);
    graphics.push_back(circle2);
    GraphicSystem system(graphics);
    ASSERT_THROW(system.GetShape(100, 100), std::invalid_argument);
}

TEST(GraphicSystemTest, Test_GetShape4) {
    std::shared_ptr<IDrawable> circle1 =
        std::make_shared<Circle>(Location(0, 0), 10);

    std::shared_ptr<IDrawable> circle2 =
        std::make_shared<Circle>(Location(20, 0), 5);

    std::vector<std::shared_ptr<IDrawable>> graphics;
    graphics.push_back(circle1);
    graphics.push_back(circle2);
    GraphicSystem system(graphics);
    ASSERT_EQ(system.GetShape(0, 0)->GetArea(), 314);
}

TEST(GraphicSystemTest, Test_CalculateTotalArea) {
    std::shared_ptr<IDrawable> circle1 =
        std::make_shared<Circle>(Location(0, 0), 10);

    std::shared_ptr<IDrawable> square1 =
        std::make_shared<Square>(Location(0, 20), 5);

    std::vector<std::shared_ptr<IDrawable>> graphics;
    graphics.push_back(circle1);
    graphics.push_back(square1);
    GraphicSystem system(graphics);
    ASSERT_EQ(system.CalculateTotalArea(), 339);
}

TEST(GraphicSystemTest, Test_Size) {
    std::shared_ptr<IDrawable> circle1 =
        std::make_shared<Circle>(Location(0, 0), 10);

    std::shared_ptr<IDrawable> square1 =
        std::make_shared<Square>(Location(0, 20), 5);

    std::vector<std::shared_ptr<IDrawable>> graphics;
    graphics.push_back(circle1);
    graphics.push_back(square1);
    GraphicSystem system(graphics);
    ASSERT_EQ(system.Size(), 2);
}