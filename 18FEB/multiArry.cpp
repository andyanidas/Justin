#include<iostream>

using namespace std;
					
int main(){			
	
	
	int arr1[5][3] = {{0,1,2},{10,11,12},{20,21,22},{30,31,32},{40,41,42}};// collection of collections
	int arr2[5][3] = {{0,1,2},{10,11,12},{20,21,22},{30,31,32},{40,41,42}};
	int arr3[5][3];
	
	for(int i = 0; i<5 ; i++){
		for(int j = 0; j<3 ; j++){
			arr3[i][j] = arr1[i][j] + arr2[i][j];
		}
	}
	//------------printing third array------------
	for(int i = 0; i<5 ; i++){
		for(int j = 0; j<3 ; j++){
			cout<<arr3[i][j]<<"\t";
		}
		cout<<endl;
	}
	
	return 0;
}


