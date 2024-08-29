#include<iostream>
using namespace std;
void selectionsort(int arr[],int n)
{
	int minindex,temp ;
	for(int i = 0; i<n; i++)
	{
		minindex = i;
		for(int j = i+1; j<n; j++)
		{
			if(arr[j] < arr[minindex]){
				minindex = j;
			}
		
		
		}
		swap(arr[minindex],arr[i]);
		
		
	}
}
int main()
{

	//int arr[] = {12,11,10,9,8,7,6,5,4,3,2,1};
	//int n = sizeof(arr)/ sizeof(0);
	int n;

	cout<<"enter size of array ->";
	cin>>n;
	int arr[n];
	cout<<"enter aray element array ->";
	for(int i = 0; i< n; i++)
	{
		cin>>arr[i];
	}
	
	selectionsort(arr,n);
	for(int i = 0; i<n; i++)
	{
		cout<<arr[i] <<" ";
	}
	
	return 0;
	
}
