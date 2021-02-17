#include<iostream>

using namespace std;

int main(){
	int array[100] = {1, 2, 3, 5, 1, 5, 20, 2, 12, 10};
	bool uniq = true;
	
	for(int i = 0; i < 10 ; i++){
		for(int j = 0; j < 10; j++){
			if(array[i] == array[j] &&  i != j){
				uniq = false;
				break;
			}
		}
		if(uniq){
			cout<<array[i]<<" ";
		}
		uniq = true;
	}
	
	
	return 0;
}
