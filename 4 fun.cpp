#include <iostream>
using namespace std;

double itc_pow(int num, int step) {
    int allnum = num;
    if (step < 0){
        for (int i = 0; i < -step - 1; i++){
            allnum = allnum * num;

        }
        return 1.0 / allnum;
    }
    for (int i = 0; i < step - 1; i++){
        allnum = allnum * num;
    }
    return allnum;
    
    if (step == 0){
        return 1;

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
