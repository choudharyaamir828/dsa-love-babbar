#include<iostream>
#include<math.h>

using namespace std;

int partition(int arr[],int s,int e){
	
	int pivot = arr[s];
	int cnt = 0;
	for(int i = s+1; i<=e; i++){
		if(arr[i] <= pivot){
			cnt++;
		}
	}
	int pivotindex = s + cnt;  //pivot element right position
	swap(arr[pivotindex],arr[s]);
	
	int i = s, j = e;
	while(i < pivotindex && j > pivotindex){
		
		while(arr[i] <= pivot)
		{
			i++;
		}
		while(arr[j] > pivot){
			j--;
		}
	}
	if(i < pivotindex && j > pivotindex){
		swap(arr[i++],arr[j--]);
	}
	return pivotindex;
	
}
void quicksort(int arr[], int s, int e)
{
	if(s >= e){
		return;
	}
	int p = partition(arr,s,e);   //partition of array
	
	quicksort(arr,s,p-1);      //left side sort
	
	quicksort(arr,p+1,e);           //right side sort
	
}
void printarray(int arr[],int n)
{
	for(int i =0; i<n; i++){
		cout<<arr[i]<<" ";
	}
}

int main(){
	
	int n;
	int arr[n];
	cout<<"enter size:->";
	cin>>n;
	cout<<"enter array element: ->";
	for(int i =0; i<n; i++)
	{
		cin>> arr[i];
	}

	quicksort(arr,0,n-1);
	printarray(arr,n);
	
	
	return 0 ;
}
