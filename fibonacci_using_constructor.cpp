#include<iostream>
using namespace std;
class fibonacci{
	private:
	 unsigned int a,b,c;
	 public:
	 	fibonacci(){
	 		a = 0;
	 		b = 1;
	 		cout<<"fibonacci series:"<<endl;
	 		cout<<a <<"\t";
		 }
		 void increment(){
		 c = a+b;
		 a = b;
		 b=c;	
		 }
		 void display(){
		 	cout<<c<<"\t";
		 }
	
};
int main(){
	fibonacci obj;
	
	for(int i =2;i<=10;i++){
		obj.display();
		obj.increment();
	}
	return 0;
}






