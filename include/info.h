#ifndef _INFO_H
#define _INFO_H

#include <stdio.h>
#include <vector>
#include <algorithm>


extern const char* RUNNING;
extern const char* SUCCESS;
extern const char* FAILURE;
extern const char* WARNING;

void printInfo(const char* info);

template<typename T, typename... Args>
void printRes(T&& first, Args&&... args) {
    std::for_each(first.begin(), first.end(), [](int x) {
        printf("%d ", x);
    });
    printf("\n");
}

void printRes(std::vector<int>& arr);

#endif