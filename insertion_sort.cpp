#include<iostream>
using namespace std;
void  insertionsort(int arr[],int n)
{
	int temp,i,j;
	
	for(i = 1; i < n; i++){
		temp = arr[i];
		
		j = i-1;
	
	while(j>=0 && temp <=arr[j]){
			
				arr[j+1] = arr[j];
		j = j-1;
		
	}
  	arr[j+1] = temp;
  }
}
void printarray(int arr[],int n){
	for(int i =0; i<n;i++)
	{
		cout<<arr[i]<<" ";
	}
}
int main(){
	int n;
	cout<<"enter size of array ->";
	cin>>n;
	int arr[n];
	cout<<"enter array element ->";
	for(int i = 0; i < n; i++){
		cin>>arr[i];
	
}
	insertionsort(arr,n);
	printarray(arr,n);
	return 0;
}

