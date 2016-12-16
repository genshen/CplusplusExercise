//
// Created by gensh on 2016/12/16.
//
#include<iostream>

using namespace std;

int main() {
    int count;

    for (int num = 1; num <= 1000; num++) {
        int sum = 1; //肯定是因子,所以循环从2开始
        for (int j = 2; j < num; j++) {
            if (num % j == 0) {
                sum += j;
            }
        }
        if (sum == num) {
            cout << num << endl; //answer:1 6 28 496
            count++;
        }
    }
    cout << count; //4
    return 0;
}