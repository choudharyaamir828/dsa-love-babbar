#include<iostream>
using namespace std;
void deletion(int arr[],int n,int pos){
	for(int i =pos;i<n;i++)
	{
		arr[i]=arr[i+1];
	}
}
int main(){
	int n;
	int a[7] = {0};
	
	
	cout<<"enter the element:";
	for(int i = 0;i<7;i++)
	{
		cin>>a[i];
	}
	for(int i = 0;i<7;i++)
	{
		cout<<""<<a[i]<<" ";
	}
	cout<<endl;
	cout<<"after deletion"<<endl;
	deletion(a,7,3);
	for(int i = 0;i<6;i++)
	{
		cout<<""<<a[i]<<" ";
	}
	
	
	
	return 0;
}
