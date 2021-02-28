#include<iostream>

using namespace std;
int countingCharsOfString(string);

int main(){
	string input,newInput;
	cout<<"Enter a string: ";
	getline(cin,input);
	
	for(int i = 0; i < countingCharsOfString(input); i++){
		
		newInput += input[i];
		
		if(i != countingCharsOfString(input) - 1){
			newInput += " ";
		}
		
	}
	
	cout<<newInput;
	
	return 0;
}

int countingCharsOfString(string s){
	int count = 0;
	for(int i = 0; s[i] != '\0'; i++){
		count++;
	}
	
	return count;
}
