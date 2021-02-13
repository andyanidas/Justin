#include<iostream>

using namespace std;

int main(){
	int s;
	/*
	cout<<"Enter the size: ";
	cin>>s;
	
	for(int i = 0 ; i < s; i++){
		for(int j = 0; j < s; j++){
			if(i<j){
				cout<<" ";
			}
		}
		for(int j = 0; j < s; j++){
			cout<<"*";
		}
		cout<<endl;
	}
	for(int i= 0; i<100; i++){
		if(i%2==0){
			continue;
		}
		cout<<i<<" ";
	}*/
	int i=0;
	
	while(1){
		i++;
		if(i>30){
			break;
		}
		if(i>20){
			continue;
		}
		cout<<"Hello "<<i<<endl;
	}
	/*
	
	*****		// i = 0 j = s - 1 - i
	*  **		// i = 1 j = s - 1 - i
	* * *		// i = 2 j = s - 3
	**  *
	*****
	
	*/
	
	return 0;
}
