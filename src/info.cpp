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

/**
 *  @brief complement a progressbar
 */

void showProgressBar(int total) {
    const int width = 30;
    for (int i = 0; i <= total; ++i) {
        float progress = (float)i / total;
        std::cout << '[';
        int pos = width * progress;
        for (int j = 0; j < width; ++j) {
            if (j < pos) std::cout << '#';
        }
        std::cout << ' ' << (int)(progress * 100.0) << "%]\r";

        std::cout.flush();

        std::this_thread::sleep_for(std::chrono::milliseconds(50));
    }

    std::cout << '\n';
}
