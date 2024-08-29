#include<iostream>
using namespace std;
void update(int& n)
{
	n++; 
}
int main(){
	int a = 30;
	int &j = a;
	cout<<a<<endl;
	update(a);
	cout<<a <<endl;
	return 0 ;
}
