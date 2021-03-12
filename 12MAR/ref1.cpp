#include<iostream>

using namespace std;

void ref(char*);
char val(char);

int main(){
	char c = 'T', d = 'T';
	char *p1 = &c;
	char *p2 = &d;
	char *p3;
	
	ref(p1);//ref(jack)
	//c = val(c); //val('T')
	cout<<c;
	
	return 0;
}
char val(char t){
	t = 'K';
	return t;
}
void ref(char* t){
	*t = 'L';
}
