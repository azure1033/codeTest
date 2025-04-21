#ifndef _TEST_H
#define _TEST_H

#include "info.h"

// #include <gtest/gtest.h>

#include <utility>
// #include <cstdarg>

extern const char* START;
extern const char* END;

template<typename Func, typename... Args>
void test(Func func, Args&&... args)
{
    printInfo(START);
    auto tmp = func(std::forward<Args>(args)...);
    printRes(tmp);
    printInfo(END);
}

template<typename Func>
void test(Func func) {
    printf("%s \n", __PRETTY_FUNCTION__);
    printInfo(FAILURE);
    return;
}
// void test_(void(*func()), ...);



#endif