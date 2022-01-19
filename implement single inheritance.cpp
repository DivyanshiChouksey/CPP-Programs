// wap to implement single inheritance
#include<iostream>
#include<string.h>
using namespace std;

class A{
	public:
		int a=10, b=20;
		void add(){
			cout<<"The addition of 2 number is "<<a+b<<endl;
		} 
};

class B: public A{
	public:
		void sub(){
			cout<<"The subtraction of 2 number is "<<a-b<<endl;
		}
};

int main(){
	B obj;
	obj.add();
	obj.sub();
	return 0;
}
