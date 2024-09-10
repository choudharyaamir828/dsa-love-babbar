#include<iostream>
using namespace std;
class A{
	public:
		int a;
};
class xyz: virtual public A
{
	public:
		int b;
};
class lmn: virtual public A{
	public:
		int c;
};
class pqr: public xyz,public lmn{
	public:
	int t;
	
};

int main()
{
	class pqr m1;
	m1.a = 30;
	m1.c = 20;
	m1.b  = 10;
	m1.t = m1.a + m1.b + m1.c;
	cout<<"sum is ->"<<m1.t;
	
	return 0;
}

