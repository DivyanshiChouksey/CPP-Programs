//wap to implement function overloading
#include<iostream>
using namespace std;

class poly{
	public:
		void area(int l,int b){
			cout<<"The Area of rectangle = "<<l*b<<endl;;
		}
		void area(float a){
			cout<<"area of circle = "<<3.14*a*a<<endl;
		}
		void area (int side){
			cout<<"area of square = "<<side*side<<endl;
		}
};

int main(){
	poly obj;
	obj.area(5,4);
	obj.area(3.0f);
	obj.area(6);
	return 0;
}
