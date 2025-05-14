// #include "info.h"
// #include "data.h"
#include "rfile.h"
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

    RFile rf;
    rf.open();
    vector<int> v1, v2, res(10);
    rf.getData(v1);
    
    rf.getData(v2);
    
    std::transform(v1.begin(), v1.end(), v2.begin(), res.begin(), [](int a, int b) {
        return a + b;
    });

    printRes(v1);
    printRes(v2);
    printRes(res);

    return 0;
}