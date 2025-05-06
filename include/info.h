#ifndef _INFO_H
#define _INFO_H


#include <vector>
#include <algorithm>
#include <chrono>
#include <iostream>
#include <stack>
#include <thread>

extern const char* RUNNING;
extern const char* SUCCESS;
extern const char* FAILURE;
extern const char* WARNING;
extern const char* DATAWRONG;

void printInfo(const char* info);

template<typename T, typename... Args>
void printRes(T&& first, Args&&... args) {
    std::for_each(first.begin(), first.end(), [](int x) {
        std::cout << x << ' ';
    });
    std::cout << '\n';
}

template<typename T>
void printRes(std::stack<T>& stack) {
    std::vector<T> temp;
    while (!stack.empty()) {
        temp.emplace_back(stack.top());
        stack.pop();
    }
    std::reverse(temp.begin(), temp.end());
    printRes(temp);
}

void printRes(std::vector<int>& arr);

void showProgressBar(int total);

#endif