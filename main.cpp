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
    getData(arr);

    int m = INT_MIN;

    for_each(arr.begin(), arr.end(), [&](int a) {
        m = max(m, a);
        cout << "m: " << m << '\n';
    });
    cout << m;
    return 0;
}