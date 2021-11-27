//WAP to make student class
#include<iostream>
#include<string.h>
using namespace std;
 
 char name[20];
 int rollno;
class student{
	public:
	char name;
	int rollno, percent,avg,p,c,m,h,e;
	void getvalue(){
		p=85;
		c=90;
		m=95;
		e=80;
		h=85;
	}
	void calculate(){
		avg = (p+c+m+h+e)/5;
	}
	void showresult(){
		cout<<" result ="<<avg;
	}
};

int main(){
	student s1;
	cout<<"enter name and rollno ";
	cin>>name>>rollno;
	cout<<"name="<<name<<" rollno="<<rollno;
	s1.getvalue();
	s1.calculate();
	s1.showresult();
	return 0;
}
