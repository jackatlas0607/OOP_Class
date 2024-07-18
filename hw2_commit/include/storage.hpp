#ifndef STORAGE_HPP
#define STORAGE_HPP

#include <string>
#include <vector>

class Storage {
public:
    /* 根據題目需求，定義成員與函式 */
    /* 見題目需求第三部分 */

    // property
    std::vector<std::string> storage;

    // constructor
    Storage(int n, std::string snacks[]);
    Storage(std::vector<std::string> snacks);

    ~Storage();

    // method
    void Add(std::string snack);

    void Set(size_t index, std::string snack);

    std::string Get(size_t index);

    void Eat(size_t index);

    size_t Size();
};

#endif
