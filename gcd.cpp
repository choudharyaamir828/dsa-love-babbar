#include<iostream>
#include<math.h>
using namespace std;
int gcd
(int a,int b){
	while(a !=b){
	
	if(a == 0)
	return b;
	if (b == 0)
	return a;
	if(a>b)
	a = a-b;
	else
	b = b-a;
	}
	
}
int main(){
	int x,y;
	cout<<"enter number:";
	cin>>x >>y;
	cout<<"gcd is :"<<gcd(x,y)<<endl;
	return 0;
}
