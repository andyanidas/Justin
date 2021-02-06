#include<iostream>

using namespace std;


int main(){
	
	int days,weeks,years,days1;
	cin>>days;
	
	years = days/365;
	weeks = (days-years*365)/7;
	days = days - years*365 - weeks*7;
	cout<<"Years: "<<years<<" Weeks: "<<weeks<<" Days: "<<days;
	
	
	return 0;
}
