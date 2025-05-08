#ifndef RFILE_H
#define RFILE_H

#include <fstream>
#include <vector>
#include <string>
#include <sstream>


template<typename T = int>
class RFile {
private:
    std::string filepath;
    std::ifstream file;
public:
    explicit RFile(const std::string& path = "data.txt") : filepath(path) {}
    ~RFile() {
        close();
    }

    bool open();
    void close();

    bool getData(std::vector<T>& arr, int n);
    bool getData(std::vector<T>& arr);
};

template<typename T>
bool RFile<T>::open() {
    file.open(filepath);
    if (!file.is_open()) {
        return false;
    }
    return true;
}

template<typename T>
void RFile<T>::close() {
    if (file.is_open()) {
        file.close();
    }
}

template<typename T>
bool RFile<T>::getData(std::vector<T>& arr, int n) {
    if (!file.is_open()) {
        printInfo(DATAWRONG);
        return false;
    }
    
    arr.clear();
    arr.resize(n);
    std::string line;
    if (!std::getline(file, line)) {
        printInfo(DATAWRONG);
        return false;
    }

    std::istringstream iss(line);
    int num;
    for (int i = 0; i < n; ++i) {
        if (!(iss >> num)) {
            printInfo(DATAWRONG);
            return false;
        } else {
            arr[i] = num;
        }
    }
    return true;
}


template<typename T>
bool RFile<T>::getData(std::vector<T>& arr) {
    if (!file.is_open()) {
        printInfo(DATAWRONG);
        return false;
    }

    std::string line;
    if (!std::getline(file, line)) {
        printInfo(DATAWRONG);
        return false;
    }

    std::istringstream iss(line);
    arr.clear();
    int num;
    while (iss >> num) {
        arr.push_back(num);
    }
    if (arr.empty()) {
        printInfo(DATAWRONG);
        return false;
    }
    return true;
}




#endif