#include "info.h"
#include "color.h"


const char* RUNNING = "RUNNING";
const char* SUCCESS = "success and exit";
const char* FAILURE = "failure and exit";
const char* WARNING = "warning";

void printInfo(const char* info)
{
    printf("\t%s...%s...%s\n", FRONT_RED, info, RESET);
}

void printRes(std::vector<int>& arr)
{
    std::for_each(arr.begin(), arr.end(), [](int x) {
        printf("%d ", x);
    });
    printf("\n");
}
