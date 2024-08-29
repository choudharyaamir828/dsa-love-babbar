#include<iostream>
using namespace std;


int partition( int arr[], int s, int e) {
	
	int pivot = arr[s];
	int i = s, j = e;
	while(i<j){
		while(arr[i] <= pivot){
			i++;
		}
		while(arr[j]> pivot){
			j--;
		}
		if(i<j){
			swap(arr[i],arr[j]);
		}
	}
	swap(arr[s],arr[j]);
	return j;
}


void quickSort(int arr[], int s, int e) {

    //base case
    if(s >= e) 
        return ;

    //partitioon karenfe
    int p = partition(arr, s, e);

    //left part sort karo
    quickSort(arr, s, p-1);

    //right wala part sort karo
    quickSort(arr, p+1, e);

}
void printarray(int arr[],int n){
	for(int i =0; i<n ;i++){
		cout<<arr[i]<<" ";
	}
}

int main() {

   int n;
   cout<<"enter size ->";
   cin>>n;
   int arr[n];
   cout<<"enter array element ->";
   for(int i =0; i<n; i++){
   	cin>>arr[i];
   }
	
    quickSort(arr, 0, n-1);
    
    printarray(arr,n);

   

    return 0;
}
