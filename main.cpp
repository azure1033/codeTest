#include "info.h"
#include "data.h"
#include "test.h"

#include <gtest/gtest.h>
#include <iostream>
// #include <string>
#include <vector>
#include <climits>
#include <numeric>
#include <algorithm>
// #include <stack>

using namespace std;

// void print(int a, const int& b) {
//     std::cout << a << " " << b << std::endl;
// }

// TEST(isprimes, test1) {
//     std::vector<int> test;
//     getData(test);
//     std::vector<bool> expected = {true, true, true, false, false, true, false, false};

//     for (size_t i = 0; i < test.size(); ++i) {
//         EXPECT_EQ(isprimes(test[i]), expected[i]) << "Test failed for input: " << i;
//     }
// }



int main() {
    // ::testing::InitGoogleTest();
    // return RUN_ALL_TESTS();

    vector<int> arr;
    
    getData(arr, 10);

    printRes(arr);
    
    
    return 0;
}