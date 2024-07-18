#include <gtest/gtest.h>
#include <stdexcept>
#include <string>
#include <vector>

#include "MaglevBus.hpp"

TEST(HW3, TestConstructMeglevBusShouldReturnCorrectElectricity) {
    MaglevBus maglevBus({"民權中山路口"}, "民權幹線", 85);

    int electricity = maglevBus.GetElectricityPercentage();

    ASSERT_EQ(electricity, 85);
}

// Add test to improve the test coverage.
TEST(HW3, MaglevBus_TestConstructor) {
    ASSERT_THROW(MaglevBus maglevBus({"民權中山路口"}, "民權幹線", 120),
                 std::invalid_argument);
}

TEST(HW3, MaglevBus_TestSetRouteName) {
    MaglevBus maglevBus({"民權中山路口"}, "民權幹線", 85);

    maglevBus.setRouteName("中山幹線");

    ASSERT_EQ(maglevBus.GetRouteName(), "中山幹線");
}

TEST(HW3, MaglevBus_TestGetStops) {
    MaglevBus maglevBus({"民權中山路口"}, "民權幹線", 85);

    ASSERT_EQ(maglevBus.GetStops()[0], "民權中山路口");
}

TEST(HW3, MaglevBus_TestGetRouteName) {
    MaglevBus maglevBus({"民權中山路口"}, "民權幹線", 85);

    ASSERT_EQ(maglevBus.GetRouteName(), "民權幹線");
}

TEST(HW3, MaglevBus_TestSetStop1) {
    MaglevBus maglevBus({"民權中山路口"}, "民權幹線", 85);

    maglevBus.setStops({"中山幹線", "市政府", "板橋"});

    ASSERT_EQ(maglevBus.GetStops()[0], "中山幹線");
}

TEST(HW3, MaglevBus_TestSetStop2) {
    MaglevBus maglevBus({"民權中山路口"}, "民權幹線", 85);

    maglevBus.setStops({"中山幹線", "市政府", "板橋"});

    ASSERT_EQ(maglevBus.GetStops()[1], "市政府");
}

TEST(HW3, MaglevBus_TestSetStop3) {
    MaglevBus maglevBus({"民權中山路口"}, "民權幹線", 85);

    maglevBus.setStops({"中山幹線", "市政府", "板橋"});

    ASSERT_EQ(maglevBus.GetStops()[2], "板橋");
}

TEST(HW3, MaglevBus_TestGetSpeedLimit) {
    MaglevBus maglevBus({"民權中山路口"}, "民權幹線", 85);

    ASSERT_EQ(maglevBus.GetSpeedLimit(), 80);
}

TEST(HW3, MaglevBus_TestSetElectricityPercentage1) {
    MaglevBus maglevBus({"民權中山路口"}, "民權幹線", 85);

    maglevBus.SetElectricityPercentage(80);

    ASSERT_EQ(maglevBus.GetElectricityPercentage(), 80);
}

TEST(HW3, MaglevBus_TestSetElectricityPercentage2) {
    MaglevBus maglevBus({"民權中山路口"}, "民權幹線", 85);

    ASSERT_THROW(maglevBus.SetElectricityPercentage(120),
                 std::invalid_argument);
}

TEST(HW3, MaglevBus_TestSetPrice1) {
    MaglevBus maglevBus({"民權中山路口"}, "民權幹線", 85);

    ASSERT_EQ(maglevBus.GetPrice(10), 750);
}

TEST(HW3, MaglevBus_TestSetPrice2) {
    MaglevBus maglevBus({"民權中山路口"}, "民權幹線", 85);

    ASSERT_EQ(maglevBus.GetPrice(0), 750);
}

TEST(HW3, MaglevBus_TestSetPrice3) {
    MaglevBus maglevBus({"民權中山路口"}, "民權幹線", 85);

    ASSERT_EQ(maglevBus.GetPrice(36), 1140);
}

TEST(HW3, MaglevBus_GetPrice) {
    MaglevBus maglevBus({"民權中山路口"}, "民權幹線", 85);

    ASSERT_THROW(maglevBus.GetPrice(-2), std::invalid_argument);
}