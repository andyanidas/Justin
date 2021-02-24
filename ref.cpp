#include <iostream>
using namespace std;
void func(int*);
void func1(int);


int main()
{
    int num = 15;
    cout<<&num<<endl;
    int* another = &num;
    cout<<*another<<endl;
    cout<<*&*&num<<endl;
    cout<<"num = "<<num<<endl;
    func(&num);
    cout<<"num = "<<num<<endl;
    func1(num);
    cout<<"num = "<<num<<endl;
    
    
    return 0;
}
void func1(int b){
	b = 200;
}
void func(int* x){
	*x = 100;
}
