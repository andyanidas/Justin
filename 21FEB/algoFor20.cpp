#include<iostream>

using namespace std;

int main(){
	string sen = "I love learning programming at Codeforwin";
	string chars// = "ilovearngp";
	//	   charsA =  {1225951843}
	int charsA[sen.size()];
	bool foundInMyChars = false;
	
	for(go throu sen){
		for(go thro chars){
			if(sen[i] is in my chars && sen[i]!=" "){
				charsA[i]++;
				foundInMyChars = true;
			}
		}
		if(!foundInMyChars){
			chars += sen[i];
			charsA[i] = 1;
		}
	}
	for(int i=0;i<chars.size()){
		cout<<chars[i] <<" occured "<<charsA[i]<<" times";
	}
	//----------------------another method----------------------
	string sen = "I love learning prog";
	string chars = "Iilovearngp";
	
	int count = 0;
	for(i 0->chars.size()){
		for(j 0->sen.size()){
			if(chars[i] == sen[j]){
				count++;
			}
		}
		cout<<chars[i] <<" occured "<<count<<" times";
		count = 0;
	}
	return 0;
}
