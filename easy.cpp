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

bool itc_iseven(int num) {
    if (num % 2 == 0) {
        return true;
    }
    else {
        return false;
    }


}

int itc_max(int num, int num2) {
    int maxx;
    if (num > num2) {
        maxx = num;
    }
    else {
        maxx = num2;
    }

    return maxx;
}

int itc_min(int min1, int min2) {
    int minim;
    if (min1 > min2) {
        minim = min2;
    }
    else {
        minim = min1;
    }

    return minim;
  }

double itc_fmax(double num, double num2) {
    double maxx;
    if (num > num2) {
        maxx = num;
    }
    else {
        maxx = num2;
    }

    return maxx;


}

double itc_fmin(double num, double num2) {
    double minim;
    if (num > num2) {
        minim = num2;
    }
    else {
        minim = num;
    }

    return minim;


}

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



