#include <gtest/gtest.h>
#include <vector>

#include "storage.hpp"

// TEST(HW1, test_create_storage_with_vector_should_correctly) {
//     Storage storage({"Chocolate", "Doritos", "Strawberries Cracker Taiwan"});

//     ASSERT_EQ(storage.Size(), 3);
// }

TEST(HW1, test_Add_method_correctly) {

    std::string arr[] = {"Chocolate", "Doritos", "Strawberries Cracker Taiwan"};
    Storage storage((sizeof(arr) / sizeof(std::string)), arr);

    storage.Add("Ice Cream");
    ASSERT_EQ(storage.Get(3), "Ice Cream");

    ASSERT_EQ(storage.Size(), 4);
}

TEST(HW1, test_Set_method_correctly1) {

    std::string arr[] = {"Chocolate", "Doritos", "Strawberries Cracker Taiwan"};
    Storage storage((sizeof(arr) / sizeof(std::string)), arr);

    storage.Add("Ice Cream");
    storage.Set(4, "Donuts");

    ASSERT_EQ(storage.Size(), 5);
}

TEST(HW1, test_Set_method_correctly2) {

    std::string arr[] = {"Chocolate", "Doritos", "Strawberries Cracker Taiwan"};
    Storage storage((sizeof(arr) / sizeof(std::string)), arr);

    storage.Add("Ice Cream");
    storage.Set(5, "Donuts");

    ASSERT_EQ(storage.Get(5), "");
    ASSERT_EQ(storage.Size(), 4);
}

TEST(HW1, test_Eat_method_correctly1) {

    std::vector<std::string> arr = {"Chocolate", "Doritos",
                                    "Strawberries Cracker Taiwan"};
    Storage storage(arr);

    storage.Add("Ice Cream");
    storage.Set(10, "Donuts");
    storage.Eat(3);

    ASSERT_EQ(storage.Get(3), "");
    ASSERT_EQ(storage.Size(), 4);
}

TEST(HW1, test_Eat_method_correctly2) {

    std::vector<std::string> arr = {"Chocolate", "Doritos",
                                    "Strawberries Cracker Taiwan"};
    Storage storage(arr);

    storage.Add("Ice Cream");
    storage.Set(10, "Donuts");
    storage.Eat(10);

    ASSERT_EQ(storage.Get(1), "Doritos");
    ASSERT_EQ(storage.Size(), 4);
}

TEST(HW1, test_Eat_method_correctly3) {

    std::vector<std::string> arr = {"Chocolate", "Doritos",
                                    "Strawberries Cracker Taiwan"};
    Storage storage(arr);

    storage.Add("Ice Cream");
    storage.Set(10, "Donuts");
    storage.Eat(10);

    ASSERT_EQ(storage.Get(3), "Ice Cream");
    ASSERT_EQ(storage.Size(), 4);
}

TEST(HW1, test_Eat_method_correctly4) {

    std::vector<std::string> arr = {"Chocolate", "Doritos",
                                    "Strawberries Cracker Taiwan"};
    Storage storage(arr);

    storage.Add("Ice Cream");
    storage.Eat(1);
    storage.Set(1, "Donuts");

    ASSERT_EQ(storage.Get(1), "Donuts");
    ASSERT_EQ(storage.Size(), 4);
}

TEST(HW1, test_Eat_method_correctly5) {

    std::vector<std::string> arr = {"Chocolate", "Doritos",
                                    "Strawberries Cracker Taiwan"};
    Storage storage(arr);

    storage.Add("Ice Cream");
    storage.Eat(1);
    storage.Eat(1);
    storage.Set(1, "Donuts");

    ASSERT_EQ(storage.Get(1), "Donuts");
    ASSERT_EQ(storage.Size(), 4);
}

TEST(HW1, test_Get_method_correctly1) {

    std::vector<std::string> arr = {"Chocolate", "Doritos",
                                    "Strawberries Cracker Taiwan"};
    Storage storage(arr);

    storage.Add("Ice Cream");
    storage.Eat(1);

    ASSERT_EQ(storage.Get(1), "");
    ASSERT_EQ(storage.Size(), 4);
}

TEST(HW1, test_Get_method_correctly2) {

    std::vector<std::string> arr = {"Chocolate", "Doritos",
                                    "Strawberries Cracker Taiwan"};
    Storage storage(arr);

    storage.Add("Ice Cream");
    storage.Eat(1);

    ASSERT_EQ(storage.Get(4), "");
    ASSERT_EQ(storage.Size(), 4);
}

/* 補齊測試使測試覆蓋率達到 95% */