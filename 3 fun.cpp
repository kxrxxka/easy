#include <iostream>
using namespace std;

int itc_sqrt(int num) {
    if (num < 0) {
        return -1;
    }

    if (num > 0) {
        long long n = 1;
        while (n * n < num) {
            n = n + 1;
        }
            if (n * n == num) {
            return n;
            }
    }
    if (num == 0) {
        return 0;
    }

    return -1;

}

int itc_skv(int num) {
    if (num <= 0) {
        return -1;
    }
        return num * num;
    }

int itc_spr(int a, int b) {
    if (a <= 0 || b <= 0) {
        return -1;
    }
    return a * b;



}

int itc_str(int a, int b, int c) {
    if ((a <= 0 || b <= 0 || c <= 0 ) || a >= (b + c) || b >= (a + c) || c >= (a + b)) {
        return -1;
        }
        if ((a + b + c) % 2 != 0) {
            return -1;
        }
        double per;
        double s;
        per = (a + b + c) / 2;
        s = itc_sqrt(per * (per - a) * (per - b) * (per - c));
        return s;

}

double itc_scir(int radius) {
    double pi = 3.14;
    if (radius == 0) {
        return 0;
    }

    if (radius < 0) {
        return -1;
    }
    double s;
    s = pi * (radius * radius);

    return s;


}
