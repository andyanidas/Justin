#include<iostream>

using namespace std;

int main(){
	int input;
	cin>>input;
	
	if(input%5 == 0){
		cout<<input<<" is divisible by 5";
	}else if(input%2 == 0){
		cout<<input<<" is not divisible by 5 but divisible by 2";
	}else if(input%3 == 0){
		cout<<input<<" is not divisible by 5 and 2 but divisible by 3";
	}
	
	bool rainy=true,snowy = false;
	
	cout<<endl<<endl;
	if(rainy && !snowy){
		cout<<"outside is storming\n";
	}
	if(rainy || snowy){
		cout<<"Take the umbrella";
	}else{
		cout<<"you dont need any umbrella since outside looks nice";
	}
	
	
	
	
	return 0;
}
