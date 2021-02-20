#include<time.h>
#include<iostream>
#include<cmath>

using namespace std;

int main(){
	srand(time(0));
	int number = rand()%100 + 1;
	int guess,count = 0;
	cout<<"Guess the number!"<<endl;
	cout<<"Try a numbe 1-100 :";
	cin>>guess;
	while(guess != number){
		count++;
		if(guess>number){
			cout<<"Much less!";
		}else{
			cout<<"Much more!";
		}
		cout<<"\nTry again :";
		cin>>guess;
	}
	cout<<"Congratz You found the nuber in "<<count<<" tries the number "<<number;
	return 0;
}
