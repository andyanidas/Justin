#include<iostream>

using namespace std;

void abc(int);

int main(){
	int x = 15;
	
	abc(x);
	cout<<"in main func "<<x;
	return 0;
}

void abc(int x){
	x += 20;
}
