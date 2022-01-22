//wap to implement scope resolution 2
#include<iostream>
using namespace std;

char c = 'a';

int main(){
	char c ='b';
	cout<<"local variable :"<<c<<"\n";
	cout<<"Global variable : "<<::c<<"\n";
	//using scope resolution operation
	return 0;
}
