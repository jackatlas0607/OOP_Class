#include "storage.hpp"
#include <iostream>
using namespace std;

/* 根據 Header 來實作對應的 Function */

// Constructors
Storage::Storage(int n, std::string snacks[]) {
    for (int i = 0; i < n; i++) {
        this->storage.push_back(snacks[i]);
    }
}

Storage::Storage(std::vector<std::string> snacks) {
    this->storage = snacks;
}

// Desturctor
Storage::~Storage() {}

// Methods
void Storage::Add(std::string snack) {
    this->storage.push_back(snack);
}

void Storage::Set(size_t index, std::string snack) {
    if (int(index) > (int)this->storage.size()) {
        return;
    } else if (int(index) == (int)this->storage.size()) {
        this->storage.push_back(snack);
        return;
    } else {
        this->storage[index] = snack;
    }
}

string Storage::Get(size_t index) {
    if ((int)index >= (int)this->storage.size() || this->storage[index] == "") {
        return "";
    } else {
        return this->storage[index];
    }
}

void Storage::Eat(size_t index) {
    if ((int)index >= (int)this->storage.size() ||
        this->storage[(int)index] == "") {
        return;
    } else {
        this->storage[(int)index] = "";
    }
}

size_t Storage::Size() {
    return (size_t)this->storage.size();
}
