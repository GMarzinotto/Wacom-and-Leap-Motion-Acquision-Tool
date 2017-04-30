#include "extended_bool.h"

void printExtendedBool(std::ofstream& fout, extended_bool input) {
    if (input == extended_bool::True) fout << "Yes";
    else if (input == extended_bool::False) fout << "No";
    else fout << "Missing";
    fout << std::endl;
}
