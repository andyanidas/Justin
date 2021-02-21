#include<iostream>

using namespace std;

int main(){
	string sen = "I love learning programming at Codeforwin";
	string rev = "";
	string word;
	int Space = sen.size()-1;
	
	for(int i = sen.size() ; i>0; i--){
		if(sen[i] == ' '){
			for(int j = i+1; j<=Space; j++){
				rev += sen[j];
			}
			rev += " ";
			Space = i-1;
		}
	}
	for(int i = 0;i<=Space;i++){
		rev += sen[i];
	}
	cout<<rev;
	
	
	
	return 0;
}
