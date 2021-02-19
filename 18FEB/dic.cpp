#include<iostream>

using namespace std;
					
int main(){			
	string dic[10][2] = {{"car","mashin"},{"blue","tsenher"},{"yellow","shar"}};
	cout<<"English\t\tMongolian\n";
	cout<<"---------------------------------\n";
	for(int i = 0; i<10; i++){
		for(int j = 0; j<2; j++){
			cout<<dic[i][j]<<"\t\t";
		}
		cout<<endl;
	}
	cout<<"Name\t\tPhone num\taddress\t\t\tDiscord ID\n";
	cout<<"-------------------------------------------------------------\n";
	string contact[100][4] = {{"John","0910293","texas rod stre","john#1341"},{"jason","asd293","IL rod street","sos#1341"}};
	
	for(int i = 0; i<2; i++){
		for(int j = 0; j<4; j++){
			cout<<contact[i][j]<<"\t\t";
		}
		cout<<endl;
	}
	return 0;
}


