#include<iostream>
using namespace std;
void  reverse(int arr[],int size){
	int start = 0;
	int end = size;
	for(int i =0;i<size;i +=2){
		if(i+1 < size)
		{
			swap(arr[i],arr[i+1]);
		}
	}	
}
void printarray(int arr[],int size){
	for(int i=0;i<size;i++){
		cout<<arr[i]<<" ";
	}

}
int maxi(int arr[],int n){
	int m = INT_MIN;
	for(int i =0;i<n;i++){
		
			m = max(m,arr[i]);
		
	}
	return m;
}
void subarraySum(int *arr,int n){
	int curr = 0;
	for(int i =0;i<n;i++){
		curr = 0;
		for(int j =i;j<n;j++){
			curr +=arr[j];
			cout<< curr<<endl;
		}
	}
}

int main(){
	int arr[] = {1,2,0,7,2};
	// reverse(a,6);
	// printarray(a,10)	;

	// cout << "the ans is : "<< maxi(a,7);
	// subarraySum(arr,5);
	return 0;
}
