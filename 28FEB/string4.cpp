#include<iostream>

using namespace std;


int main(){
	string input;
	int alp= 0,dig = 0, spec = 0;
	cout<<"Enter first string: ";
	getline(cin,input);
	
	
	for(int i = 0; input[i] != '\0'; i++){
		for(int j = i+1; input[j] != '\0'; j++){
			if(input[i]>input[j]){
				char temp = input[i];
				input[i] = input[j];
				input[j] = temp;
			}
		}
	}
	cout<<input;
	/*
	for(int i = 0; i < 10 ; i++){
		for(int j = i+1; j < 10; j++){
			if(array[i] >array[j]){
				int temp = array[i];
				array[i] = array[j];
				array[j] = temp;
			}
		}
	}
	*/
	
	return 0;
}

