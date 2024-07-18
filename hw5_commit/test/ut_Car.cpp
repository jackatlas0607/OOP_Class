//
// Created by 黃漢軒 on 2023/11/20.
//

#include <gtest/gtest.h>

#include "Car.hpp"

TEST(CarTest, TestCarWithPlateNumberConstructorShouldSetupCorrectValue) {
    Car Car("AAA-BBBB");

    ASSERT_EQ(Car.GetPlateNumber(), "AAA-BBBB");
}

// Add more tests
TEST(CarTest, CarType) {
    Car Car("AAA-BBBB");

    ASSERT_EQ(Car.GetType(), "Vehicle");
}

TEST(CarTest, Car_VehicleName) {
    Car Car("AAA-BBBB");

    ASSERT_EQ(Car.GetVehicleName(), "Car");
}

TEST(CarTest, CarPrice) {
    Car Car("AAA-BBBB");

    ASSERT_EQ(Car.GetPrice(), 40);
}
