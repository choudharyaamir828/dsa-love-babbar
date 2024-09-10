#include<iostream>
using namespace std;
class rectangle{
	public:
		int lenght;
		int breadth;
		void show(){
			cout<<lenght << endl;
			cout<<breadth << endl;
		}
		
		
		
		
};
class cuboid : public rectangle
{
	public:
		int height;
		
		void display(){
			cout<< height << endl;
		}
		void area_rectangle(){
			cout<<"area of rectangle is ->"<<lenght*breadth << endl;
		}
		void area_cuboid(){
			cout<<"area of cuboid is ->"<< lenght *breadth*height << endl;
		}
};
 int  main(){
 	
 	
	cuboid c;
	
	c.lenght = 20;
	c.breadth = 10;
	c.height = 30;
	c.show();
	c.display();
	c.area_cuboid();
	c.area_rectangle();
                               

	return 0;
}









