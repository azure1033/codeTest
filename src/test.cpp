#include "test.h"


const char* START = "Testing Start";
const char* END = "Test End";


// void test_(void(*func()), ...)
// {
//     std::va_list args;
//     va_start(args, func);
//     // std::vector<int> arr = va_arg(args, std::vector<int>);
// }


bool isprimes(const int n) {
    if (n < 2) return false;
    for (int i = 2; i * i <= n; ++i) {
        if (n % i == 0) return false;
    }
    return true;
}