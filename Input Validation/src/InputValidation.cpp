#include <iostream>
#include "InputValidation.h"

using namespace std;

bool isInteger(int& inputInteger) {
    if (cin >> inputInteger) {
        return true;
    } else {
        cin.clear();
        cin.ignore(10000, '\n');
        return false;
    }
}
