#include<iostream>

using namespace std;

//function prototype
string carFactory();
int add(int,int);
void age(int);

int main(){
	cout<<carFactory();
	int summition;
	summition = age(2007); //70
	
	int year;
	cout<<"Enter your birth year: ";
	cin>>year;
	age(year);
	
	return 0;
}

int add(int first, int second){
	int sum = first + second;
	return sum;
}
string carFactory(){
	return "Here is your new car";
}
void age(int year){
	cout<<"your age is"<<2021 - year;
}
