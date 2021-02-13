#include<iostream>

using namespace std;

int main(){
	int s;
	cout<<"Enter the size: ";
	cin>>s;
	
	for(int i = 0 ; i < s; i++){
		for(int j = 0; j < s; j++){
			cout<<"*";
		}
		cout<<endl;
	}
	
	
	return 0;
}
