//Default constructor
#include<iostream>
using namespace std;

class Rectangle{
	public:
		Rectangle(){       //constructor
			int l,b,area;
			cin>>l>>b;
			cout<<"Area = "<<l*b;
		}
};

int main (){
	Rectangle obj;    //instance of class
	return 0;
}
