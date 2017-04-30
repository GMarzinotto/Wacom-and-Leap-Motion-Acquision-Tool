#pragma once
#include <fstream>

#define MISSING "Missing"

//using namespace std;

enum class extended_bool { True, False, Missing };

void printExtendedBool(std::ofstream& fout, extended_bool input);