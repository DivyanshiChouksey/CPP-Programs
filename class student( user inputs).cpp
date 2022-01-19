//WAP to make class student( user inputs)
#include<iostream>
#include<string.h>
using namespace std;
 
class student{
	public:
		char name[20] = "GG ";
		int rollno = 2021;
		int dsa, c, cpp, m3, python, p;
		void getvalue(){
			cout<<"Enter the marks of dsa,c,cpp,m3,python\n";
			cin>>dsa>>c>>cpp>>m3>>python;
		}
		
		void calculate(){
			p = (dsa+c+cpp+m3+python)/5;
		}
		
		void showValues(){
			cout<<"The percentage of is "<<p;
		}
};

int main(){
	student s1;
	cout<<"Name = "<<s1.name<<" Rollno = "<<s1.rollno<<endl;
	s1.getvalue();
	s1.calculate();
	s1.showValues();
	return 0;
}
