#include<iostream>

using namespace std;

void printArr(int*, int);

int main(){
	int arr[6] = {123,3,1,3,5,5};
	
	printArr(arr,0);
	cout<<"in main func "<<arr[0];
	return 0;
}

void printArr(int abc[], int index){
	if(index != 6){
		abc[index] += 10;
		cout<<"element - "<<index<<" : "<<abc[index]<<endl;
		printArr(abc,index + 1);
	}
}
