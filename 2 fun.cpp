#include <iostream>
using namespace std;

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
