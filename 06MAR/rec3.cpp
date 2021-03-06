#include<iostream>
using namespace std;

void febRec(int,int,int,int);

//1 1 2 3 5 8 13 21 34 55
int main(){
	int in;
	cout<<"Enter an integer: ";
	cin>>in;
	
	febRec(1,1,in,1);
	
	return 0;
}

void febRec(int a, int b, int max,int count){
	if(count==1){
		cout<<a<<" ";
	}
	if(count!=max){
		cout<<b<<" ";
		int temp = a;
		a = b;
		b = temp + b;
		febRec(a,b,max,count+1); //count++
	}
}
