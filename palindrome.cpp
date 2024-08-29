#include<iostream>
#include<math.h>
using namespace std;
int main(){
	int n;
	cout<<"enter number:";
	cin>> n;
	for(int i = 1;i<n/3;i++){
		int p = pow(i,3);
		if(p == n){
			cout<<"cube root is :"<<i;
			break;
		}
	}
	return 0;
	
}
