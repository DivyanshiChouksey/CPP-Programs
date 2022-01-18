// wap for destructor
#include<iostream>
using namespace std;

class Rectangle{
	public:
		Rectangle(){
			int l,b,area;
			cout<<"Enter l and b ";
			cin>>l>>b;
			cout<<"Area = "<<l*b<<endl;
		}
		
		~Rectangle(){
			cout<<"Memory is being deallocated";
		}
};

int main(){
	Rectangle obj;
	return 0;
}
