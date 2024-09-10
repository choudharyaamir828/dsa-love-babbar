#include<iostream>
using namespace std;
class abc{
	private:
		int x,y,z;
	public:
		abc(int a,int b,int c){
			x = a;
			y = b;
			z = c;
		}
		void print(){
			cout<<x <<" "<<y <<" "<<z;
		}
		
	
};
int main(){
	abc m1(12,15,17);            //parameter constructor
	abc m2 = m1;             //copy constructor   
	m1.print();
	cout<<endl;
	m2.print();
	
	
	return 0;
	
}
