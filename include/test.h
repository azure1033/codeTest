#ifndef _TEST_H
#define _TEST_H

#include "info.h"

#include <utility>


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

#endif