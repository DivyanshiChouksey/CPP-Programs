//wap to implement friend function
#include<iostream>
using namespace std;

class Divya{
	public:
		int a=5,b=10;
		void mul(){
			cout<<a*b<<endl;
		}
};

void tiya(Divya D){
	cout<<"Value of a,b: "<<D.a<<" & "<<D.b;
}

int main(){
	Divya obj;
	obj.mul();
	tiya(obj);
	return 0;
}
