#include "data.h"
#include "info.h"

std::string PATH = "data.txt";

std::ifstream openFile(std::string path)
{
    std::ifstream file(path);
    if (!file.is_open()) {
        printInfo(FAILURE);
        return std::ifstream();
    }
    return file;
}

int getData(std::vector<int>& arr, int n)
{
    std::ifstream file = openFile(PATH);
    if (!file.is_open()) {
        return -1;
    }

    arr.clear();
    arr.resize(n);
    for (int i = 0; i < n; ++i) {
        if (!(file >> arr[i])) {
            printInfo(FAILURE);
            return -1;
        }
    }
    return 0;
}
