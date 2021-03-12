#include <iostream>
using namespace std;

void ref(string*);

int main(){
   string str1 ="hello ";
   string* strP=&str1; 
   cout<<&str1<<endl;
   
   ref(strP);
   
   
   return 0;
}
void ref(string* abc){
	*abc = "Bye";
	cout<<"Adrress of ref abc  = "<<&abc<<endl;
	
}
