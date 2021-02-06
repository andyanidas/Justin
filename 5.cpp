#include<iostream>

using namespace std;

int main(){
	bool check;
	string name ;
	string pass;
	cout<<"Enter username: ";
	cin>>name;
	
	if(name == "jonson"){
		cout<<"Enter Password: ";
		cin>>pass;
		if(pass == "asd123"){
			cout<<"Access Granted";
		}else{
			cout<<"your password is wrong";
		}
	}else {
		cout<<"Your username is wrong";
	}
	
	
	
	
	return 0;
}
