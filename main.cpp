#include "color.h"
#include "info.h"
#include "data.h"
#include "test.h"


#include <iostream>

std::vector<int>& sort_test(std::vector<int>& arr) {
    std::sort(arr.begin(), arr.end());
    return arr;
}

void print(int a, const int& b) {
    std::cout << a << " " << b << std::endl;
} 


int main() {
    std::string path = "data.txt";
    openFile(path);
    std::vector<int> arr;
    int n = 8;

    getData(arr, n);

    test(sort_test, arr);

    return 0;
}