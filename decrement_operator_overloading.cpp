#include<iostream>
using namespace std;
class rectangle{
	
	int length ;
	int bredth ;
	public:
	rectangle(){
		length =3;
		bredth =3;
	}

		void operator --(){
			length -=1;
			bredth -=1;
		}
		void operator +(){
			length = length+4;
			bredth	= bredth + 6;
		}
		void display()
		{
			cout<< length <<endl;
			cout<< bredth <<endl;
		}
		void operator *(){
			length = length*2;
			bredth = bredth *2;
		}
};
int main()
{
	rectangle r;
	r.display();
	cout << endl;
	--r;
	r.display();
	cout <<endl;
	r.operator +();
	r.display();
	cout <<endl;
	r.operator *();
	r.display();
	return 0;
}

