//wap to implement access specifier
#include<iostream>
using namespace std;
 
class Rectangle1{
	protected:
		void area(int l,int b){
			int ar = l*b;
			cout<<"The area of rectangle is "<<ar<<endl;
		}
};

class Rectangle2 : public Rectangle1{
	public:
		void area(int l,int b){
			int ar = l*b;
			cout<<"The area of reactangle2 is "<<ar<<endl;
			Rectangle1::area(4,12);
		}
};

int main(){
	Rectangle2 obj;
		obj.area(10,20);
		return 0;
}
