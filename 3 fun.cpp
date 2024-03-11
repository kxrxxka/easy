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
    if ((a <= 0 || b <= 0 || c <= 0 ) || ((a + b <= c) || (a + c <= b) || (c + b <= a))) {
        return -1;
        }
        int per, s;
        per = (a + b + c)/2;
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
    int s;
    s = radius * radius * pi;

    return s;


}
