#include<iostream>
#include<cstring>


using namespace std;

int main(){
	string one = "onea asd1io1 1p23j";
	string two = "two";
	string third;
	//bool comp = 	size()>one.size();
	for(int i = 0; i<one.size(); i++){
		if(isdigit(one[i])){
			//cout<<"inside loop";
			third += one[i];
		}
	}
	cout<<&third<<endl;
	
	for(int i = one.size()-1; i>=0; i--){
		third += one[i];
		
	}
	cout<<third;
	
	int a = 1234;
	int* abs = &a;
	cout<<"\nabs="<<abs<<endl<<"a="<<a<<"\n*abs = "<<*abs;
	
	return 0;
}
