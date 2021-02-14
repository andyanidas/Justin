#include<iostream>

using namespace std;

int main(){
	int a=0,b=1,c;
	c=a+b;
	int n;
	cout<<"Enter an integer: ";
	cin>>n;
	if(n<1){
		cout<<"Inviled input!";
	}else if(n==1){
		cout<<a;
	}else if(n==2){
		cout<<a<<" "<<b;
	}else{
		cout<<a<<" "<<b<<" ";
	}
	for(int i = 3; i <= n; i++){
		cout<<c<<" ";
		a=b;
		b=c;
		c=a+b;
	}
	
	return 0;
}
