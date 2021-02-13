#include<iostream>

using namespace std;

int main(){
	int s;
	cout<<"Enter the size: ";
	cin>>s;
	
	for(int i = 0 ; i < s; i++){
		for(int j = 0; j < s; j++){
			if(i == 0 || i == s-1 || j==0 || j ==s-1 || i==j || j == s - 1 - i){
				cout<<"*";
			}else{
				cout<<" ";
			}
		}
		cout<<endl;
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
