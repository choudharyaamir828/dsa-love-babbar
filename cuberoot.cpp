#include<iostream>
#include<math.h>
using namespace std;
int iscube(int n){
	int cnt =0;
		for(int i = 1;i<n/3;i++){
		int p = pow(i,3);
		if(p == n){
			return i;	
		}
	}
	
}
int main(){
	int num;
	cout<<"enter number:";
	cin>> num;
	cout<<"cube is :"<<iscube(num);
	return 0;
	
	
}
