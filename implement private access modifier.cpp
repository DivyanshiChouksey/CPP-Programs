//wap to implement private access modifier
#include<iostream>
using namespace std;

class Cars{
	public:
		void company(){
			cout<<"Tesla\n";
		}
		void model(){
			cout<<"X\n";
		}
		void oilType(){
			cout<<"electrical\n";
			piston();
		}
	private:
		void piston(){
			cout<<"6 pistons\n";
		}
};

int main(){
	Cars Tesla;
	Tesla.company();
	Tesla.model();
	Tesla.oilType();
	return 0;
}
