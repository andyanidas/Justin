#include<iostream>

using namespace std;

int main(){	
	int n;	
    //0 1 2 3 4 ->>this is index number
	int arr[10]={1,2,9,-10,-99,10,-110};
	cout<<"All the negative numbers in your array are: ";
	for(int i=0;i<10;i++){
		if(arr[i]<0){
			cout<<arr[i]<<" ";
		}
	}
	
	return 0;
}
