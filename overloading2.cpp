#include<iostream>
using namespace std;
class count{
	int value;
	public:
	 count(int a){
	 	value = a;
	 	cout<<"value of a is before ="<<value <<endl;
		}
		
	int operator ++()
	{
		++value;
	}
	void display()
	{
		cout<<"value is ->"<<value<<endl;
	}
};
int main()
{
	count count1(5);
	++count1;
	count1.display();
	return 0;
}
