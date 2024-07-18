#include <iostream>
#include <vector>

#include "../include/traversal.hpp"

bool traversal(std::size_t n, int arr[]) {
    /* 實作題目上的需求，若 arr 能夠被完整遍歷，輸出 Yes，否則輸出 No */
    std::size_t iter = 0;
    int index = 0;
    std::vector<int> vec;
    vec.push_back(0);
    while (iter < n - 1) {
        bool found = std::find(vec.begin(), vec.end(), arr[index]) != vec.end();
        if (found) {
            return false;
        }
        vec.push_back(arr[index]);
        index = arr[index];
        iter++;
    }
    return true;
}
