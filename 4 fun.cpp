#include <iostream>
using namespace std;

double itc_pow(int num, int step) {
    int annum = num;
    if (step < 0) {
        for (int i = 0; i < -step - 1; i++) {
            annum = annum * num;
        }
        return 1/annum;
    }

    for (int i = 0; i < step - 1; i++) {
        annum = annum * num;
    }

    return num;


}

bool itc_ispositive(int num) {
    if ((num == 0) || (num > 0)) {
        return true;
    }
        return false;
}


bool itc_ispositive_d(double num) {
    if ((num == 0) || (num > 0)) {
        return true;
    }
        return false;

}
