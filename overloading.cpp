#include<iostream>
using namespace std;
class loc{
	int longitude;
	int latitude;
	public:
		loc(){
		}
		loc(int lg,int lt){
			longitude = lg;
			latitude = lt;
		}
		loc operator +(loc obj2);
		loc operator ++();
		void display()
		{
			cout<<longitude << " " << latitude;
			
		}
		
};
loc loc::operator +(loc obj2){
	loc temp;
	temp.longitude = longitude + obj2.longitude;
	temp.latitude = latitude + obj2.latitude;
	
	return temp;
}
loc loc::operator ++(){
	
	longitude++;
	latitude++;
	
	return *this;
}


int main()
{
	loc obj1(10,20),obj2(40,30),obj3;
	++obj2;
     obj3 = obj1 + obj2;
	obj2.display();
	cout<<endl;
	obj3.display();
	
	
}
