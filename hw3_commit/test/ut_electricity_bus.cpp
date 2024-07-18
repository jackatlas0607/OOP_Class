#include <gtest/gtest.h>
#include <stdexcept>
#include <string>
#include <vector>

#include "ElectricBus.hpp"

TEST(HW3, TestConstructElectricBusShouldReturnCorrectElectricity) {
    ElectricBus electricBus({"民權中山路口"}, "民權幹線", 85);

    int electricity = electricBus.GetElectricityPercentage();

    ASSERT_EQ(electricity, 85);
}

// Add test to improve the test coverage.
TEST(HW3, ElectricBus_TestConstructor) {

    ASSERT_THROW(ElectricBus electricBus({"民權中山路口"}, "民權幹線", 120),
                 std::invalid_argument);
}

TEST(HW3, ElectricBus_TestSetRouteName) {
    ElectricBus electricBus({"民權中山路口"}, "民權幹線", 85);

    electricBus.setRouteName("中山幹線");

    ASSERT_EQ(electricBus.GetRouteName(), "中山幹線");
}

TEST(HW3, ElectricBus_TestGetStops) {
    ElectricBus electricBus({"民權中山路口"}, "民權幹線", 85);

    ASSERT_EQ(electricBus.GetStops()[0], "民權中山路口");
}

TEST(HW3, ElectricBus_TestGetRouteName) {
    ElectricBus electricBus({"民權中山路口"}, "民權幹線", 85);

    ASSERT_EQ(electricBus.GetRouteName(), "民權幹線");
}

TEST(HW3, ElectricBus_TestSetStop1) {
    ElectricBus electricBus({"民權中山路口"}, "民權幹線", 85);

    electricBus.setStops({"中山幹線", "市政府", "板橋"});

    ASSERT_EQ(electricBus.GetStops()[0], "中山幹線");
}

TEST(HW3, ElectricBus_TestSetStop2) {
    ElectricBus electricBus({"民權中山路口"}, "民權幹線", 85);

    electricBus.setStops({"中山幹線", "市政府", "板橋"});

    ASSERT_EQ(electricBus.GetStops()[1], "市政府");
}

TEST(HW3, ElectricBus_TestSetStop3) {
    ElectricBus electricBus({"民權中山路口"}, "民權幹線", 85);

    electricBus.setStops({"中山幹線", "市政府", "板橋"});

    ASSERT_EQ(electricBus.GetStops()[2], "板橋");
}

TEST(HW3, ElectricBus_TestGetSpeedLimit) {
    ElectricBus electricBus({"民權中山路口"}, "民權幹線", 85);

    ASSERT_EQ(electricBus.GetSpeedLimit(), 40);
}

TEST(HW3, ElectricBus_TestSetElectricityPercentage1) {
    ElectricBus electricBus({"民權中山路口"}, "民權幹線", 85);

    electricBus.SetElectricityPercentage(80);

    ASSERT_EQ(electricBus.GetElectricityPercentage(), 80);
}

TEST(HW3, ElectricBus_TestSetElectricityPercentage2) {
    ElectricBus electricBus({"民權中山路口"}, "民權幹線", 85);

    ASSERT_THROW(electricBus.SetElectricityPercentage(120),
                 std::invalid_argument);
}

TEST(HW3, ElectricBus_TestSetPrice1) {
    ElectricBus electricBus({"民權中山路口"}, "民權幹線", 85);

    ASSERT_EQ(electricBus.GetPrice(20), 150);
}

TEST(HW3, ElectricBus_TestSetPrice2) {
    ElectricBus electricBus({"民權中山路口"}, "民權幹線", 85);

    ASSERT_EQ(electricBus.GetPrice(36), 310);
}

TEST(HW3, ElectricBus_GetPrice) {
    ElectricBus electricBus({"民權中山路口"}, "民權幹線", 85);

    ASSERT_THROW(electricBus.GetPrice(-2), std::invalid_argument);
}