//
// Created by gensh on 2016/12/16.
//

//use while statement to calculate the sum of all odd from 1 to 100
#include <iostream>

using namespace std;

int main() {
    int i = 1, sum = 0; //some bad ideas:i or sum did'n initialize
    while (i < 100) {
        sum += i;
        i += 2;
    }
    cout << sum; //anwser: 2500
    return 0;
}