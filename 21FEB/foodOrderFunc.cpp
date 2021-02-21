#include<iostream>

using namespace std;

//function prototype
void menu(string);
int orderFood(int);
int orderDrink(int);


int main(){
	string t;
	int number;
	cout<<"What do you wanna order? (food or drink): ";
	cin>>t;
	menu(t);
	if(t=="food"){
		cout<<"How many food u want to order: ";
		cin>>number;
		cout<<"you have to wait "<<orderFood(number)<<" minutes";
	}
	
	
	return 0;
}

void menu(string Type){
	if(Type == "food"){
		cout<<"1.Burger\n2Soap\n3.Kebab";
	}else if(Type == "drink"){
		cout<<"1.Tea\n2Cola\n3.Pepsi";
	}
}

int orderFood(int num){
	if(num>5){
		return 20;
	}else if(num>2){
		return 5;
	}else{
		return 1;
	}
}
int orderDrink(int num){
	
}
