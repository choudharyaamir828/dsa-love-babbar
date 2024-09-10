#include<iostream>
using namespace std;
class B;
class A{
	int a;
	public:
		void sata()
		{
			int i;
			cout<<"enter the value of a ->";
			cin>>i;
			a = i;
		}
	friend void max(A ,B );
};
class B{
	int b;
	public:
		void stab(){
			int i;
			cout<<"enter the value of b ->";
			cin>>i;
			b = i;
		}
	friend void max(A,B);
		
};
void max(A obj1,B obj2 ){
	
	if(obj1.a > obj2.b)
	{
		cout<<"a is greater"<<endl;
	}
	else
	{
		cout<<"b is greater"<<endl;
	}
	
}
int main()
{
	A obj1;
	B obj2;
	obj1.sata();
	obj2.stab();
	max(obj1 ,obj2);
	
	return 0;
}
