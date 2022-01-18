//parameterized constructor
#include<string.h>
using namespace std;

class Car{
	public:
		string brand;
		string model;
		int year;
		Car(string x, string y, int z){      //constructor with parameters
			brand = x;
			model = y;
			year = z;
		}
};

int main(){
	string brand;
	string model;
	int year;
	cout<<"Enter brand ,model,year of car\n";
	cin>>brand>>model>>year;
	Car carobj1(brand,model,year);
	cout<<carobj1.brand<<" "<<carobj1.model<<" "<<carobj1.year<<"\n";
	
	return 0;
}
