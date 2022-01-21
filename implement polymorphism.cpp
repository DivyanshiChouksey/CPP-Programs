//wap to implement polymorphism
#include<iostream>
using namespace std;

class poly{
	public:
		void a(){
			cout<<"0 Para\n";
		}
		void a(int a){
			cout<<"1 Para\n";
		}
		void a(float a){
			cout<<"float Para\n";
		}
};

int main(){
	poly obj;
	obj.a(5);
	obj.a();
	obj.a(5.2f);
	return 0;
}
