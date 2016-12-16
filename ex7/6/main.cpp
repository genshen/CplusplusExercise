//
// Created by gensh on 2016/12/16.
//
#include<iostream>

using namespace std;

int main() {
    int sum = 0;
    int n;
    cout << "input a number"<<endl;
    cin >> n;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <=i; j++) {
            sum += j;
        }
    }
    cout << sum; //e.g: input 5,output:35
    return 0;
}