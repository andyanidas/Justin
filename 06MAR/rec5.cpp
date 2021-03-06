#include<iostream>

using namespace std;

int digCount(int);

int main(){
	int num,dig;
	cin>>num;
	dig = digCount(num);
	cout<<dig;
	
	return 0;
}

int digCount(int abc){
	if(abc>0){
		return 1 + digCount(abc/10);
	}
	else{
		return 0;
	}
}
