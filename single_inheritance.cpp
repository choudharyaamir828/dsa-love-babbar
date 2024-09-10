// studant information using single inheritane

#include<iostream>
using namespace std;
class student{
	int rollno;
	string name;
	int id;
	public:
		void readdata();
		void display();
};
class marks :public student {
	private:
		int pm;
		int cm;
		int mm;
	public:
		void getdata();
		void disdata();
};
void student::readdata(){
	cout<<"enter the roll number of student ->";
	cin>> rollno;
	cout<<"enter the name of the student ->";
	cin>>name;
	cout<<"enter the id of studant ->";
	cin>>id;	
}
void student::display(){
	cout<<"roll number is  ->"<<rollno<<endl;
	cout<<"name of the student ->"<<name<<endl;
	cout<<"unique id of the student ->"<<id<<endl;
}
 void marks::getdata(){
 	student::readdata();
	cout<<"enter marks in pm, cm , mm";
	cin>>pm >> cm >> mm;
}

void marks::disdata(){
	student::display();
	cout<<"marks in phsics , chamistry, maths"<<pm<<cm<<mm<<endl;
	
}
int  main(){
	marks a;
	cout<<"\n student information "<< endl;
	a.getdata();
	a.disdata();
	return 0;
}


