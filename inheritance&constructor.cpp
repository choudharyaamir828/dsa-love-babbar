#include<iostream>
using namespace std;
class base
{
public:
    base()
    {
        cout<<"default of base class"<<endl;
    }
    base (int a)
    {
        cout<<"paramaterized of base class"<< a << endl;
    }

	
	 	
	 
};
class derived : public  base
{
public:
    derived()
    {
        cout<<"derived default constructors_1"<<endl;
    }
    derived(int a)
    {
        cout<<"paramaterized of derived class"<<a<<endl;
    }
    ~derived()
    {
    	cout<<"hello derived"<<endl;
	}
};
class derived_2 : public  base
{
public:
	int x;
	int y;
    derived_2()
    {
        cout<<"derived default constructors_2 class "<<endl;
    }
    derived_2(int a)
    {
        cout<<"paramaterized of derived_2 class"<<a<<endl;
    }
    
    void area(int a,int b){
    	cout<<"area is ->"<<a*b <<endl;
    	
	}
	~derived_2(){
		cout<<"hello derived_2"<<endl;
	}
};
int main()
{

    base b(10);
    base b2;
    
    cout<<endl;
    
    derived d;
    derived d2(12);
    
    cout<<endl;
    
    derived_2 m;
    derived_2 m2(14);
    
      cout<<endl;
      
	m.area(4,5);


    return 0;
}
