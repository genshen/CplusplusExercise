#include <iostream>
using namespace std;
int main(){
	//��Ŀ:ͳ���������ĸ���� 
	int Char[26*2] = {0};
//Char[0] 'A' ����
//Char[1] 'B' ����
//...
// arr[26] 'a'����
//... 
//Char[51] 'z'���� 
	char ch;
	while(cin.get(ch)){
		//Ascci �� 65 
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
