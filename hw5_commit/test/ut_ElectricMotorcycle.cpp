//
// Created by 黃漢軒 on 2023/11/20.
//
#include <gtest/gtest.h>

#include "ElectricMotorcycle.hpp"

TEST(
    ElectricMotorcycleTest,
    TestElectricMotorcyclePowerAndNumberPlateConstructorShouldSetupCorrectValue) {
    ElectricMotorcycle ElectricMotorcycle(5, "AAA-BBBB");

    ASSERT_EQ(ElectricMotorcycle.GetPlateNumber(), "AAA-BBBB");
    ASSERT_EQ(ElectricMotorcycle.GetBatteryCapacity(), 10);
    ASSERT_EQ(ElectricMotorcycle.GetCurrentPower(), 5);
}

// Add more tests
TEST(
    ElectricMotorcycleTest,
    TestElectricMotorcyclePowerAndNumberPlateConstructorShouldSetupCorrectValue2) {
    ElectricMotorcycle ElectricMotorcycle;
    ASSERT_EQ(ElectricMotorcycle.GetBatteryCapacity(), 10);
    ASSERT_EQ(ElectricMotorcycle.GetCurrentPower(), 0);
}

TEST(
    ElectricMotorcycleTest,
    TestElectricMotorcyclePowerAndNumberPlateConstructorShouldSetupCorrectValue3) {
    ElectricMotorcycle ElectricMotorcycle(5);
    ASSERT_EQ(ElectricMotorcycle.GetBatteryCapacity(), 10);
    ASSERT_EQ(ElectricMotorcycle.GetCurrentPower(), 5);
}

TEST(ElectricMotorcycleTest, TestElectricMotorcycle_Type_VehicleName_Price) {
    ElectricMotorcycle ElectricMotorcycle(5, "AAA-BBBB");

    ASSERT_EQ(ElectricMotorcycle.GetType(), "ElectricVehicle");
    ASSERT_EQ(ElectricMotorcycle.GetVehicleName(), "ElectricMotorcycle");
    ASSERT_EQ(ElectricMotorcycle.GetPrice(), 25);
}

TEST(ElectricMotorcycleTest, TestElectricMotorcycle_SetCapacity) {
    ElectricMotorcycle ElectricMotorcycle(5, "AAA-BBBB");
    ElectricMotorcycle.SetBatteryCapacity(20);

    ASSERT_EQ(ElectricMotorcycle.GetBatteryCapacity(), 20);
}