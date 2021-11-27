//WAP Employee class
#include<iostream>
#include<string>
using namespace std;

class employee{
	public:
		char name[20]="GG";
		char post[50]="Graphic Designer";
		int salary,annual;
		void getSalary(){
			cout<<"\nEnter monthly salary ";
			cin>>salary;
		}
		void calAnnual(){
			annual= (salary)*12;
		}
		void showresult(){
			cout<<"Annual salary = "<<annual;
		}
};

int main(){
	employee e1;
	cout<<"Name = "<<e1.name;
	cout<<"\nPost = "<<e1.post;
	e1.getSalary();
	e1.calAnnual();
	e1.showresult();
	return 0;
}

