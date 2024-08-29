#include<iostream>
using namespace std;
class student_info{
	private:
		int roll_no;
		char sex;
		float height;
		float weight;
	public:
		void get_info();
		void dis_info();
		
};
 void student_info :: get_info(){
 	cout<<"enter roll number:";
 	cin>>roll_no;
 	cout<<"enter sex :";
 	cin>>sex;
 	cout<<"enter height:";
 	cin>>height;
 	cout<<"enter weight:";
 	cin>>weight;
 }
 void student_info::dis_info(){
 	cout<<endl;
 	cout<<"\t\t\t\t STUDENT INFORMATION:"<<endl;
 	cout<<"roll number is :"<< roll_no << endl;
 	cout<<"sex is :"<< sex<< endl;
 	cout<< " height is :"<< height<< endl;
 	cout<<"weight is :"<< weight << endl;
 }
 int main(){
 	student_info obj;
 	obj.get_info();
 	obj.dis_info();
 	return 0;
 	
 }
 
 
 
 
 
 
