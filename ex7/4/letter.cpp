//
// Created by gensh on 2016/12/16.
//
#include <iostream>

#define N 7 //lines = 2*N-1
using namespace std;

int main() {
    for (int line = 0; line < N; line++) { //N行
        for (int i = 0; i < N - line - 1; i++) {
            cout << " ";
        }
        char letter = 'A' + line;
        for (int i = 0; i < 2 * line + 1; i++) {
//            cout<<"*";
            cout << letter;
        }
        cout << endl; //每行结束补充一个换行
    }

    for (int line = 0; line < N - 1; line++) { //N-1行
        for (int i = 0; i < line + 1; i++) {
            cout << " ";
        }
        char letter = 'A' + N - line - 2;
        for (int i = 0; i < 2 * (N - line - 1) - 1; i++) {
            //            cout<<"*";
            cout << letter;
        }
        cout << endl; //每行结束补充一个换行
    }


    return 0;
}