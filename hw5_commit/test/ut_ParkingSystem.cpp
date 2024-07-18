//
// Created by 黃漢軒 on 2023/11/20.
//

#include <gtest/gtest.h>
#include <memory>
#include <stdexcept>

#include "Car.hpp"
#include "ElectricCar.hpp"
#include "ElectricMotorcycle.hpp"
#include "Motorcycle.hpp"
#include "ParkingSystem.hpp"

// Add tests here
TEST(ParkingSystemTest, Test_AddVehicle) {
    ParkingSystem parkingSystem;
    std::shared_ptr<Car> v1 = std::make_shared<Car>();
    std::shared_ptr<ElectricCar> v2 = std::make_shared<ElectricCar>();
    std::shared_ptr<ElectricMotorcycle> v3 =
        std::make_shared<ElectricMotorcycle>();
    std::shared_ptr<Motorcycle> v4 = std::make_shared<Motorcycle>();

    parkingSystem.AddVehicle(v1);
    parkingSystem.AddVehicle(v2);
    parkingSystem.AddVehicle(v3);
    parkingSystem.AddVehicle(v4);
    ASSERT_EQ(parkingSystem.GetSize(), 4);
    ASSERT_THROW(parkingSystem.AddVehicle(v1), std::invalid_argument);
}

TEST(ParkingSystemTest, Test_RemoveVehicle) {
    ParkingSystem parkingSystem;
    std::shared_ptr<Car> v1 = std::make_shared<Car>("ABC-123");
    std::shared_ptr<ElectricCar> v2 = std::make_shared<ElectricCar>();
    std::shared_ptr<ElectricMotorcycle> v3 =
        std::make_shared<ElectricMotorcycle>();
    std::shared_ptr<Motorcycle> v4 = std::make_shared<Motorcycle>();

    parkingSystem.AddVehicle(v1);
    parkingSystem.AddVehicle(v2);
    parkingSystem.AddVehicle(v3);
    parkingSystem.AddVehicle(v4);

    parkingSystem.RemoveVehicle(v2->GetPlateNumber());
    ASSERT_EQ(parkingSystem.GetSize(), 3);

    ASSERT_THROW(parkingSystem.RemoveVehicle(v2->GetPlateNumber()),
                 std::invalid_argument);
}

TEST(ParkingSystemTest, Test_GetTotalParkingPricePerHour) {
    ParkingSystem parkingSystem;
    std::shared_ptr<Car> v1 = std::make_shared<Car>("ABC-123");
    std::shared_ptr<ElectricCar> v2 = std::make_shared<ElectricCar>();
    std::shared_ptr<ElectricMotorcycle> v3 =
        std::make_shared<ElectricMotorcycle>();
    std::shared_ptr<Motorcycle> v4 = std::make_shared<Motorcycle>();

    parkingSystem.AddVehicle(v1);
    parkingSystem.AddVehicle(v2);
    parkingSystem.AddVehicle(v3);
    parkingSystem.AddVehicle(v4);

    // 25+40+25+40 = 130,  0電力到充飽電 (10-0) * 5 = 50,  50*2 + 130
    ASSERT_EQ(parkingSystem.GetTotalParkingPricePerHour(), 230);
}

TEST(ParkingSystemTest, Test_CalculateParkingPrice) {
    ParkingSystem parkingSystem;
    std::shared_ptr<Car> v1 = std::make_shared<Car>("ABC-123");
    std::shared_ptr<ElectricCar> v2 = std::make_shared<ElectricCar>();
    std::shared_ptr<ElectricMotorcycle> v3 =
        std::make_shared<ElectricMotorcycle>();
    std::shared_ptr<Motorcycle> v4 = std::make_shared<Motorcycle>();

    parkingSystem.AddVehicle(v1);
    parkingSystem.AddVehicle(v2);
    parkingSystem.AddVehicle(v3);
    parkingSystem.AddVehicle(v4);

    // Car 一小時 40,  40*3 = 120
    ASSERT_EQ(parkingSystem.CalculateParkingPrice(v1->GetPlateNumber(), 3),
              120);

    // ElectricMotorcycle 一小時 25, 25*3 + (10-0)*5 = 125
    ASSERT_EQ(parkingSystem.CalculateParkingPrice(v3->GetPlateNumber(), 3),
              125);
}
