#include <iostream>
using namespace std;
int main(){
	//题目:统计输入的字母个数 
	int Char[26*2] = {0};
//Char[0] 'A' 个数
//Char[1] 'B' 个数
//...
// arr[26] 'a'个数
//... 
//Char[51] 'z'个数 
	char ch;
	while(cin.get(ch)){
		//Ascci 码 65 
		if(ch>=65 && ch <=90){ // english char 
			Char[ch-65]++;
		} else if(ch>=97 && ch<=122){
			Char[ch-65-6]++;
		}else{
			break;
		}
	}
	
	for(int i =0;i<26*2;i++){
		cout<<(char)((i+65)>=91?i+65+6:i+65)<<"Count:"<<Char[i]<<endl;
	}
return 0;
} 
