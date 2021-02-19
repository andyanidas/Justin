#include<iostream>

using namespace std;
					
int main(){			
	int arr[100][100];
	for(int i=0;i<100;i++){
		for(int j=0;j<100;j++){
			arr[i][i]=i*j;
		}
	}
	
	
	return 0;
}


