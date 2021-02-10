#include<iostream>

using namespace std;

int main(){
	int num,firstDigit,lastDigit,temp,count = 0,temp1=1;
	//cin>>num;			//323456 ->> 623453
	num = 123456;
	temp = num;
	lastDigit = num%10;
	for(;num>10;num/=10){ //count how many digits in given int
		count++;
	}
	count++;
	firstDigit = num;
	num = temp;	//123456 ->> 123451
	cout<<"Last digit is "<<lastDigit<<"\nFirst Digit is "<<num<<"\nNum of Digit :"<<count;
	num = num/10*10 + firstDigit; //123456/10*10+firstDigit = 123451
	cout<<"\nnum = "<<num;
	
	//123451%100000 -> 23451 -> 623451
	//temp1 = 1;
	for(int i = 1 ; i<count ;i++){	//to create temp =  1*10*10*10*10*10 = 100000
		temp1 = temp1*10;
	}
	cout<<"\ntemp1 = "<<temp1; //temp1 = 100000
	//num = 123451 // temp1 = 100000
	num = num%temp1; //num = 23451 //lastDigit = 6
	
	num = num + lastDigit*temp1;
	cout<<"\nMy New Number : "<<num;
	
	/*123 - > 50 + 4 =54
	for(){
		LD = num%10 //take last digit
		num/10
		newNum = numNum*10 + LD
	}
	*/
	
	return 0;
}
