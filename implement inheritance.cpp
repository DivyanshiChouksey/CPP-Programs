//wap to implement inheritance
#include<iostream>
#include<string.h>
using namespace std;

class parent {
	public:
		int parentmoney,childmoney;
		void money1(){
			parentmoney =10;
			cout<<"Parent's money = "<<parentmoney<<endl;
		}
};

class child:public parent{
	public:
		void money2(){
			childmoney = 20;
			cout<<"child is money = "<<childmoney<<endl;
			cout<<"child's total money = " <<parentmoney+childmoney<<endl;
		}
};

int main(){
	child obj;
	obj.money1();
	obj.money2();
	return 0;
}
