//
// Created by gensh on 2016/12/16.
//
#include<iostream>
#include <cmath>

using namespace std;

int main() {
    double piValue = 2;
    for (int n = 1;; n++) {
        double currentPi = piValue * (2 * n * 2 * n) / ((2 * n - 1) * (2 * n + 1));
        if (abs(currentPi - piValue) < 1e-5) {
            cout << piValue<<endl;
            break;
        }
        piValue = currentPi;
    }
    return 0;
}