//
// Created by gensh on 2016/12/16.
//
#include <iostream>
#define N 5  //5 lines
using namespace std;

int main() {
 /*
*********
o*******
oo*****
ooo***
oooo*
*/
    for(int line=0;line<N;line++){ //N lines
        for(int i=0;i<2*N-line-1;i++){  //每一行输出字符数 9,8,7,6,5(其中前line个是回车，后面全部是*)
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