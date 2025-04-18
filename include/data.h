#ifndef _DATA_H_
#define _DATA_H_

#include <fstream>
#include <string>
#include <vector>

extern std::string PATH;

std::ifstream openFile(std::string path);

int getData(std::vector<int>& arr, int n);

#endif