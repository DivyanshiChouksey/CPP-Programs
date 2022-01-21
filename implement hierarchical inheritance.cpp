//wap to implement hierarchical inheritance
#include<iostream>
#include<string.h>
using namespace std;

class A{
	public:
		int a=10,b=20;
		void add(){
			cout<<"The addition of 2 numbers is "<<a+b<<endl;
		}
};

class B:public A {
	public:
		void mul(){
			cout<<"The multiplication of 2 numbers is "<<a*b<<endl;
		}
};

class C:public A{
	public:
		void sub(){
			cout<<"The subtraction of 2 numbers is "<<a-b<<endl;
		}
};

int main(){
	C obj;
	obj.add();
	obj.sub();
	B obj2;
	obj2.mul();
	return 0;
}
