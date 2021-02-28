#include<iostream>

using namespace std;
int countingCharsOfString(string);

int main(){
	string sent = "I love coding";
	cout<<sent.size()<<endl;
	int num = countingCharsOfString(sent);
	cout<<num;
	
	return 0;
}

int countingCharsOfString(string s){
	int count = 0;
	for(int i = 0; s[i] != '\0'; i++){
		count++;
	}
	
	return count;
}
