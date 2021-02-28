#include <iostream>
using namespace std;
void func(int*);
int func1(int);


int main(){
    string a = "this is a string test example";
    string b = "test";
    bool found = false;
    
    if(found == true)
    for(int i=0; i->endOfStringA){
    	for(j = 0;(a[i]==b[j]); j++){
    		if(b[j+1]=='\0'){
    			found = true;
    			break;
			}
			i++;
		}
		if(found){
			break;
		}
	}
    
    for(int i = 0; i <10; i++){
    	cout<<i;
    	if(i == 5){
    		break;
		}
	}
    
    return 0;
}


