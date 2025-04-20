#include "info.h"
#include "data.h"
#include "test.h"

#include <gtest/gtest.h>
#include <iostream>

std::vector<int>& sort_test(std::vector<int>& arr) {
    std::sort(arr.begin(), arr.end());
    return arr;
}

void print(int a, const int& b) {
    std::cout << a << " " << b << std::endl;
}

TEST(SortTest, HandlesPositiveNumbers) {
    std::vector<int> input = {3, 1, 4, 1, 5};
    std::vector<int> expected = {1, 1, 3, 4, 5};
    EXPECT_EQ(sort_test(input), expected);
}

TEST(SortTest, HandlesEmptyVector) {
    std::vector<int> input = {};
    std::vector<int> expected = {};
    EXPECT_EQ(sort_test(input), expected);
}

int main() {
    std::string path = "data.txt";
    openFile(path);
    std::vector<int> arr;
    int n = 8;

    getData(arr, n);

    test(sort_test, arr);
    test(print);

    ::testing::InitGoogleTest();
    return RUN_ALL_TESTS();

    return 0;
}