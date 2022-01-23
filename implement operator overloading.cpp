//wap to implement operator overloading
#include<iostream>
using namespace std;

class Test{
	public:
		int num = 8;
		void operator ++(){	
		num = num+2;
		}
		void print(){
			cout<<"The count is :"<<num;
		}
};

int main(){
	Test tt;
	++tt;
	tt.print();
	return 0;
	
}
