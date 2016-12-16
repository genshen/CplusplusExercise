//
// Created by gensh on 2016/12/16.
//
#include<iostream>
#include <cmath>

using namespace std;

int main() {
    int value1, value2;
    cout << "input 2 number\n";
    cin >> value1 >> value2;

    if (value1 > value2) { //交换,保证value1<value2
        int temp = value2;
        value2 = value1;
        value1 = temp;
    }

    int maxCommonDivisor;
    for (int i = 1; i <= value1; i++) {  //最大公约数
        if (value1 % i == 0 && value2 % i == 0) {
            maxCommonDivisor = i;
        }
    }
    cout << "Max Common Divisor:" << maxCommonDivisor << endl;

    int maxCommonMultiple;
    for (int i = value2; i <= value1 * value2; i++) {  //最小公约数
        if (i % value1 == 0 && i % value2 == 0) {
            maxCommonMultiple = i;
            break;
        }
    }
    cout << "Max Common Multiple:" << maxCommonMultiple << endl;
    return 0;
}
