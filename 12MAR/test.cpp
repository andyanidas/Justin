#include <iostream>
using namespace std;
void chanArr(int*);

int main(){
   string sen = "I love coding";
   string* senP = &sen;
   cout<<(*senP)[0];
   
   return 0;
}

void chanArr(int *asd){
	asd++;
	asd[1] = 10;
}
