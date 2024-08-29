#include<iostream>
using namespace std;
int x = 60;
class A{
  
    public:
    	static int  d;


    int	area(int a,int b){
	  
        return a*b;
}
    void volume(int len, int wid, int heig);
    
    	
	
};
int area(int a,int b){
	  
        return a*b;
}
void volume(int len, int wid, int heig){
cout<<"  volume is -> " << len*wid*heig << endl;
}
int A::d=80;

int main()
{
     A obj;
	//cout<< "area is ->" << ::area(5,4) ;
	cout<< "area is ->" << obj.area(5,6);
	cout<< endl;
    ::volume(5,6,3);
    cout<< ::x << endl;
    cout<< A::d <<endl;
    return 0;

}