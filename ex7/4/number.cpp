//
// Created by gensh on 2016/12/16.
//
#include <iostream>

#define N 5  //5 lines
using namespace std;

int main() {
    for (int line = 0; line < N; line++) { //N lines
        int k = 1;
        for (int i = 0; i < N; i++) {  //每一行输出字符数:N  (N-line-1个空格,line+1个数字)
            if (i < N - line - 1) {
                cout << " ";
            } else {
//                cout<<"*";
                cout << k;
                k += 2;
            }
        }
        cout << endl; //每行结束补充一个换行
    }
    return 0;
}
