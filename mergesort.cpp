#include<iostream>
using namespace std;
merge(int *arr,int s,int e){
	 int mid = (s+e)/2;
	 
	 int L1 = mid - s + 1;
	 int L2 = e - mid;
	 int *first = new int[L1];
	 int *second = new int[L2];
	 int k =s;
	 for(int i =0; i<L1; i++){
	 	first[i] = arr[k++];
	 }
	 
	 k = mid+1;
	 for(int i =0; i<L2; i++){
	 	second[i] = arr[k++];
	 }
	                // merge both array
	 int index1 = 0;
	 int index2 = 0;
	 k = s;
	 while(index1 < L1 && index2 <L2)
	 {
	 	if(first[index1]  < second[index2]){
	 		arr[k++] =  first[index1++];
		 }
		 else{
		 	arr[k++] = second[index2++];
		 }
	 }
	 while(index1 < L1){
	 	arr[k++]= first[index1++];
	 }
	 while(index2 < L2){
	 	arr[k++]= second[index2++];
	 }
	 
	 delete []first;
	 delete []second;
	 
}
 void mergesort(int *arr,int s,int e){

	if(s >= e){
		return ;         // base case 
	}
	int mid = (e+s)/2;
	mergesort(arr,s,mid);            //left side array
	
	mergesort(arr,mid+1,e);           //lright side array
	merge(arr,s,e);

}
int main(){
	int n;
	cout<<"enter length of array:";
	cin>>n;
	int arr[n] ;
	
	cout<<"enter array:";
	for(int i =0;i<n;i++)
	{
		cin>>arr[i];
	}
	cout<<"before sorted -> ";
	for(int i =0;i<n;i++){
		cout<<arr[i]<<" ";
	}
	
	mergesort(arr,0,n-1);
	cout<<endl;
	
	cout<<"after sorted ->  ";
	for(int i =0;i<n;i++){
		cout<<arr[i]<<" ";
	}
	
	return 0;
}
