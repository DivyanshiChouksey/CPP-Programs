#include<iostream>
using namespace std;
class rectangle {
	public:
		int l,b,area;

		void getdata() {
			cout<<"Enter l ";
			cin>>l;
			cout<<"Enter b ";
			cin>>b;
		}

		void findarea() {
			area = l*b;
		}

		void display() {
			cout<<"Area of rectangle is "<<area;
		}
};

int main() {
	rectangle r1;
	r1.getdata();
	r1.findarea();
	r1.display();

	return 0;
}
