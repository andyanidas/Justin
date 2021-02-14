#include<iostream>

using namespace std;

int main(){	
	int num,index;	
    //0 1 2 3 4 ->>this is index number
	int arr[10]={1,2,9,-10,-99,10,-110};
	for(int i = 0; i<10;i++){
		cout<<arr[i]<<" ";
	}
	
	cout<<"\nEnter an nuber: ";
	cin>>num;	//500
	cout<<"Where do you wanna insert it: ";
	cin>>index;	//3
	
	//shifting operation
	for(int i = 9; i>=index; i--){
		arr[i+1] = arr[i];
	}
	arr[index] = num;
	
	//arr[index]= num;
	cout<<"\n----------------------------------------------------\n";
	for(int i = 0; i<10;i++){
		cout<<arr[i]<<" ";
	}
	
	//here my deleting element code starting 
	cout<<"\nWhich element do you wanna delete: ";
	cin>>index;
	for(int i = index; i<9; i++){
		arr[i] = arr[i+1];
		cout<<"+++++++";
	}
	cout<<"\n----------------------------------------------------\n";
	for(int i = 0; i<10;i++){
		cout<<arr[i]<<" ";
	}
	
	return 0;
}
