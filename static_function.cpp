#include<iostream>
using namespace std;
class sample{
	private:
		static int cnt;
		
	public:
		void display();
		
};
 int sample::cnt = 50;
 void sample::display(){
	for(int i = 1;i<=10;i++){
		cnt +=i;
	}
	cout<<"sum of all value ->"<<cnt;
	cout<<endl;
}
int main()
{
	sample obj;
	obj.display();
	cout<<endl;
	for(int i =1;i<3;i++)
	{
		obj.display() ;
	}
	
	return 0;
}
