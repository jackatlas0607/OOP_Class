//
// Created by 黃漢軒 on 2023/11/20.
//
#include <gtest/gtest.h>

#include "ElectricCar.hpp"

TEST(ElectricCarTest,
     TestElectricCarPowerAndNumberPlateConstructorShouldSetupCorrectValue) {
    ElectricCar electricCar(5, "AAA-BBBB");

    ASSERT_EQ(electricCar.GetPlateNumber(), "AAA-BBBB");
    ASSERT_EQ(electricCar.GetBatteryCapacity(), 10);
    ASSERT_EQ(electricCar.GetCurrentPower(), 5);
}

// Add more tests
TEST(ElectricCarTest,
     TestElectricCarPowerAndNumberPlateConstructorShouldSetupCorrectValue2) {
    ElectricCar electricCar;

    ASSERT_EQ(electricCar.GetBatteryCapacity(), 10);
    ASSERT_EQ(electricCar.GetCurrentPower(), 0);
}

TEST(ElectricCarTest,
     TestElectricCarPowerAndNumberPlateConstructorShouldSetupCorrectValue3) {
    ElectricCar electricCar(3);

    ASSERT_EQ(electricCar.GetBatteryCapacity(), 10);
    ASSERT_EQ(electricCar.GetCurrentPower(), 3);
}

TEST(ElectricCarTest, TestElectricCar_Type_VehicleName_Price) {
    ElectricCar electricCar(5, "AAA-BBBB");

    ASSERT_EQ(electricCar.GetType(), "ElectricVehicle");
    ASSERT_EQ(electricCar.GetVehicleName(), "ElectricCar");
    ASSERT_EQ(electricCar.GetPrice(), 40);
}

TEST(ElectricCarTest, TestElectricCar_SetCapacity) {
    ElectricCar electricCar(5, "AAA-BBBB");
    electricCar.SetBatteryCapacity(20);
    ASSERT_EQ(electricCar.GetBatteryCapacity(), 20);
}