//
// Created by 黃漢軒 on 2023/10/21.
//

#include <gtest/gtest.h>
#include <stdexcept>
#include <string>
#include <vector>

#include "GasBus.hpp"

TEST(HW3, GasBus_TestSetRouteName) {
    GasBus gasBus({"民權中山路口"}, "民權幹線", 40);

    gasBus.setRouteName("中山幹線");

    ASSERT_EQ(gasBus.GetRouteName(), "中山幹線");
}

// Add test to improve the test coverage.

TEST(HW3, GasBus_TestGetRouteName) {
    GasBus gasBus({"民權中山路口"}, "民權幹線", 40);

    ASSERT_EQ(gasBus.GetRouteName(), "民權幹線");
}

TEST(HW3, GasBus_TestGetStops) {
    GasBus gasBus({"民權中山路口"}, "民權幹線", 40);

    ASSERT_EQ(gasBus.GetStops()[0], "民權中山路口");
}

TEST(HW3, GasBus_TestSetStop1) {
    GasBus gasBus({"民權中山路口"}, "民權幹線", 40);

    gasBus.setStops({"中山幹線", "市政府", "板橋"});

    ASSERT_EQ(gasBus.GetStops()[0], "中山幹線");
}

TEST(HW3, GasBus_TestSetStop2) {
    GasBus gasBus({"民權中山路口"}, "民權幹線", 40);

    gasBus.setStops({"中山幹線", "市政府", "板橋"});

    ASSERT_EQ(gasBus.GetStops()[1], "市政府");
}

TEST(HW3, GasBus_TestSetStop3) {
    GasBus gasBus({"民權中山路口"}, "民權幹線", 40);

    gasBus.setStops({"中山幹線", "市政府", "板橋"});

    ASSERT_EQ(gasBus.GetStops()[2], "板橋");
}

TEST(HW3, GasBus_TestGetSpeedLimit) {
    GasBus gasBus({"民權中山路口"}, "民權幹線", 40);

    ASSERT_EQ(gasBus.GetSpeedLimit(), 40);
}

TEST(HW3, GasBus_TestSetGas) {
    GasBus gasBus({"民權中山路口"}, "民權幹線", 40);

    gasBus.SetGas(100);

    ASSERT_EQ(gasBus.GetGas(), 100);
}

TEST(HW3, GasBus_TestSetPrice1) {
    GasBus gasBus({"民權中山路口"}, "民權幹線", 40);

    ASSERT_EQ(gasBus.GetPrice(30), 450);
}

TEST(HW3, GasBus_TestSetPrice2) {
    GasBus gasBus({"民權中山路口"}, "民權幹線", 40);

    ASSERT_EQ(gasBus.GetPrice(36), 480);
}

TEST(HW3, GasBus_GetPrice) {
    GasBus gasBus({"民權中山路口"}, "民權幹線", 40);

    ASSERT_THROW(gasBus.GetPrice(-2), std::invalid_argument);
}