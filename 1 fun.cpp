#include <iostream>
using namespace std;

void itc_name() {
    cout << "Ksenya" << endl;

}

void itc_fio() {
    itc_name();
    cout << "Mazina Konstantinovna" << endl;
}

int itc_abs(int num) {
    if (num < 0) {
        return -num;
    }
    else {
        return num;
    }

}

double itc_fabs(double num) {
    if (num < 0) {
        return -num;
    }
    else {
        return num;
    }

}

int itc_revnbr(int num) {
    int mun;
    mun = 0;
    while (num != 0) {
            mun = mun * 10 + num % 10;
            num = num / 10;
    }
    return mun;

}
