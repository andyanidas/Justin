#include<iostream>

using namespace std;

//function prototype
int add(int, int);
int sub(int, int);
void welcome();

int main(){
	int a,b,op;
	welcome();
	cin>>op;
	if(op==1){
		cout<<"Enter 2 numbers: ";
		cin>>a>>b;
		cout<<"a+b="<<add(a,b);
	}else{
		cout<<"Enter 2 numbers: ";
		cin>>a>>b;
		cout<<"a-b="<<sub(a,b);
	}
	return 0;
}

int add(int x, int y){
	return x+y;
}
int sub(int x, int y){
	return x-y;
}
void welcome(){
	cout<<"Welcome to my function calculator";
	cout<<endl<<"Choose your operator\n1.Add\n2.Sub\nYour choice: ";
}
