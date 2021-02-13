#include<iostream>

using namespace std;

int main(){
	int day;
	cout<<"Enter an integere 1-7: ";
	cin>>day;
	
	if(day==1 ){
		print MON
	}else if(day==2){
		
	}
	switch(day){
		case 1:
			cout<<"Mon";
			break;
		case 2:
			cout<<"TU";
			break;
		case 3:
			cout<<"WE";
			break;
		case 4:
			cout<<"TH";
			break
		default:
			cout<<"inviled input!";
			break;
	}
	
	/*
	
	*****		// i = 0 j = s - 1 - i
	*  **		// i = 1 j = s - 1 - i
	* * *		// i = 2 j = s - 3
	**  *
	*****
	
	*/
	
	return 0;
}
