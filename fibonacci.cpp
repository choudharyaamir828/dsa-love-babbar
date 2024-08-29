#include<iostream>
using namespace std;
void fibo(int n)
{
	int a;
	
	if(n == 0){
		cout<< "0";
	}
	if (n == 1){
		cout<<"1";
	}
	a = fibo(n-1) + fibo(n-2);
	cout<<" "<<a;
	
	
}
int main(){
	int a =0,b=1,c;
	int n;
	cout<<"enter number:";
	cin>> n;
/*out<< a <<" "<< b;
	for(int i =2;i<n;i++){
		c = a+b;
		cout<<" "<<c;
		a=b;
		b = c;
	}*/
	fibo(n);
	return 0;
}

