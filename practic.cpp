#include<iostream>
using namespace std;
int main(){
	int a,b,c;
	cout << "enter a "<<endl;
	cin>>a;
	cout << "enter b "<<endl;
	cin>>b;
	try{
		
		
		if(a< 0 || b < 0){
			throw(a);
		}
		else{
			c = a+ b;
			cout << c << endl;
		}
	}
	
	catch(...){
		cout << "negative number";
	}
	return 0;
}
