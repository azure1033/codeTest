#include "data.h"
#include "info.h"

#include <string>

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
    
    std::string line;
    std::getline(file, line);
    std::istringstream iss(line);
    int num;
    for (int i = 0; i < n; ++i) {
        if (!(iss >> num)) {
            printInfo(DATAWRONG);
            return -1;
        } else {
            arr[i] = num;
        }
    }
    
    return 0;
}

int getData(std::vector<int> &arr)
{
    std::ifstream file = openFile(PATH);
    std::string line;
    if (!std::getline(file, line)) {
        printInfo(FAILURE);
        return -1;
    }

    std::istringstream iss(line);
    arr.clear();
    int num;

    while (iss >> num) {
        arr.push_back(num);
    }

    if (arr.empty()) {
        printInfo(FAILURE);
        return -1;
    }

    return 0;
}
