#include <gtest/gtest.h>

#include "traversal.hpp"

TEST(TraversalTest, TestExampleShouldReturnTrue) {
    int arr[] = {2, 0, 1};

    int result = traversal(3, arr);

    ASSERT_EQ(result, true);
}

TEST(TraversalTest, TestExampleShouldReturnFalse) {
    int arr4[] = {0, 2, 1};

    int result4 = traversal(3, arr4);

    ASSERT_EQ(result4, false);
}
/* 撰寫測試，使測試覆蓋率大於 95% */