#include<iostream>
using namespace std;
int getmax(int a[],int size){
	
	int max =INT_MIN;
	for (int i = 0 ;i <size;i++){
		if(a[i] > max){
		
		max = a[i];
	}
	}
	return max;
	
}
int main(){
	int arr[20];
	int n;
	cout<< "how many elementjyou want to store:";
	cin >>n;
	for(int i =0;i<=n;i++)
	{
		cin >>arr[i];
	}
	cout << "maximum value:"<< getmax(arr,n);
	
}
