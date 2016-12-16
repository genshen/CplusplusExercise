//
// Created by gensh on 2016/12/16.
//
#include<iostream>

using namespace std;

int main() {
    int count;
    for (int i = 10000; i <= 99999; i++) {
        //e.g: i =12345
        int bitSum = i / 10000; //万位: 1
        int num = i % 10000; //去掉万位是数: 2345

        bitSum += num / 1000; // 千位 2
        num = i % 1000; //去掉千位后 345

        bitSum += num / 100; // 百位 3
        num = i % 100; //去掉百位后 45

        bitSum += num / 10; // 十位 4
        bitSum += i % 10; //去掉十位后 5
        //可以用循环算个位的和
        if (bitSum == 9 && i % 5 == 0) {
            cout << i << endl;
            count++;
        }
    }
    cout << count; //answer 185
    return 0;
}