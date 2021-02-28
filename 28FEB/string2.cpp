#include<iostream>

using namespace std;
int sizeStr(string);

int main(){
	string input1,input2;
	cout<<"Enter first string: ";
	getline(cin,input1);
	cout<<"Enter second string: ";
	getline(cin,input2);
	
	int size1 = sizeStr(input1);
	int size2 = sizeStr(input2);
	
	return 0;
}

int sizeStr(string s){
	int count = 0;
	for(int i = 0; s[i] != '\0'; i++){
		count++;
	}
	
	return count;
}
