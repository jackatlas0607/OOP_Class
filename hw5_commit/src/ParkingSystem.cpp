//
// Created by 黃漢軒 on 2023/11/22.
//

#include "../include/ParkingSystem.hpp"
#include <algorithm>
#include <stdexcept>
#include <vector>

int ParkingSystem::FindVehicleIndexByPlateNumber(std::string plateNumber) {
    for (int i = 0; i < (int)this->vehicles.size(); i++) {
        if (this->vehicles[i]->GetPlateNumber() == plateNumber) {
            return i;
        }
    }
    return -1;
}

int ParkingSystem::GetChargingFeeByPlateNumber(std::string plateNumber) {
    // 找出要查詢的車在哪個 index
    int index;
    for (int i = 0; i < (int)this->vehicles.size(); i++) {
        if (this->vehicles[i]->GetPlateNumber() == plateNumber) {
            index = i;
        }
    }

    std::shared_ptr<ElectricVehicle> electricVehicle =
        std::dynamic_pointer_cast<ElectricVehicle>(this->vehicles[index]);

    return (electricVehicle->GetBatteryCapacity() -
            electricVehicle->GetCurrentPower()) *
           5;
}

ParkingSystem::ParkingSystem() {}

void ParkingSystem::AddVehicle(std::shared_ptr<Vehicle> vehicle) {
    std::vector<std::shared_ptr<Vehicle>>::iterator it;

    // vehicle 沒在 vehicles就會返回 vehicles.end()
    it = std::find(this->vehicles.begin(), this->vehicles.end(), vehicle);
    if (it == this->vehicles.end()) {
        this->vehicles.push_back(vehicle);
    } else {
        throw std::invalid_argument("Already in the park!");
    }
}

void ParkingSystem::RemoveVehicle(std::string plateNumber) {
    int findIndex;
    findIndex = this->FindVehicleIndexByPlateNumber(plateNumber);
    if (findIndex == -1) {
        throw std::invalid_argument("PlateNumber does not exist.");
    } else {
        this->vehicles.erase(this->vehicles.begin() + findIndex);
    }
}

int ParkingSystem::GetTotalParkingPricePerHour() {
    int total = 0;
    for (int i = 0; i < (int)this->vehicles.size(); i++) {
        total += this->vehicles[i]->GetPrice(); // 停車費

        if (this->vehicles[i]->GetVehicleName() == "ElectricCar" ||
            this->vehicles[i]->GetVehicleName() == "ElectricMotorcycle") {
            total += this->GetChargingFeeByPlateNumber(
                this->vehicles[i]->GetPlateNumber());
        }
    }

    return total;
}

int ParkingSystem::CalculateParkingPrice(std::string plateNumber, int hour) {

    // 找出停放車牌的車輛 index
    int index = this->FindVehicleIndexByPlateNumber(plateNumber);
    int total = 0; // 計算總停車費，電費只算一次
    if (index == -1) {
        throw std::invalid_argument("PlateNumber does not exist");
    } else {
        // 計算停車費
        total += this->vehicles[index]->GetPrice() * hour;
    }

    // 計算電費
    if (this->vehicles[index]->GetVehicleName() == "ElectricCar" ||
        this->vehicles[index]->GetVehicleName() == "ElectricMotorcycle") {
        total += this->GetChargingFeeByPlateNumber(plateNumber);
    }

    return total;
}

int ParkingSystem::GetSize() {
    return this->vehicles.size();
}