#include<iostream>

using namespace std;
					
int main(){			
	int array[100] = {10, 5, 20, 3, 5, 1, 5, 20, 2, 12};
	for(int i = 0; i < 10 ; i++){
		for(int j = i+1; j < 10; j++){
			if(array[i] >array[j]){
				int temp = array[i];
				array[i] = array[j];
				array[j] = temp;
			}
		}
	}
	for(int i = 0; i < 10 ; i++){
		cout<<array[i]<<" ";
	}
	
	
	return 0;
}
/*
2, 1, 2, 3, 5, 1, 5, 20, 2, 12

*/


