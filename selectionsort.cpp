#include<iostream>
using namespace std;
void selectionSort(int arr[],int n){
	int i , j , index;
	for( i = 0;i<n-1;i++){
		index = i;
		for( j = i+1;j<n;j++ ){
			if(arr[j] < arr[index]){
				index  = j;
			}
			swap(arr[index],arr[i]);
		}
	}
}
int printarray(int arr[],int n){
	for(int i = 0 ;i<n;i++){
		cout << arr[i] << " ";
	}
}
int main(){
	int a[]= {4,1,6,2,0,18,23,45,12};
	int n,i;
	selectionSort(a,9);
	printarray(a,9);
	return 0;
}

