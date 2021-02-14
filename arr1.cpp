#include<iostream>

using namespace std;

int main(){
	int n;
	cout<<"Enter the size of the array: ";
	cin>>n;
	int arr[n];
	cout<<"Enter "<<n<<" elements"<<endl;
	for(int i = 0; i<n; i++){
		cout<<i<<"th element: ";
		cin>>arr[i];
	}
	cout<<"Your array is: ";
	for(int i=0; i<n; i++){
		cout<<arr[i]<<" ";	
	}
	
	
	return 0;
}
