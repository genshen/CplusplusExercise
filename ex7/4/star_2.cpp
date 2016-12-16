//
// Created by gensh on 2016/12/16.
//
#include <iostream>
#define N 5  //5 lines
using namespace std;

int main() {
    /*
*********
oo*******
oooo*****
oooooo***
oooooooo*
   */
    for(int line=0;line<N;line++){ //N lines
        for(int i=0;i<N;i++){  //每一行输出字符数:N  (line个空格,N-line个*)
            if(i<line){
                cout<<" ";
            }else{
                cout<<"*";
            }
        }
        cout<<endl; //每行结束补充一个换行
    }
    return 0;
}