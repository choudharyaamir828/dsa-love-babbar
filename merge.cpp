#include <iostream>
using namespace std;
void merge(int arr[],int s,int e){

  int mid = (s+e) /2;
  int len1 = mid-s+1;
  int len2 = e-mid;

  int* left = new int[len1];
  int* right = new int[len2];
  int k = s;

  for(int i=0; i< len1; i++){
    left[i] = arr[k++];
  }

  k = mid+1;

  for(int i=0; i<len2; i++){
    right[i]= arr[k++];
  }

  // merge logic
  int leftindex = 0;
  int rightindex = 0;
  int mainindex = s;

  while(leftindex < len1 && rightindex < len2){

    if(left[leftindex] <= right[rightindex]){
      arr[mainindex++] = left[leftindex++];
    }
    else{
      arr[mainindex++] = right[rightindex++];
    }
  }
  while(leftindex < len1){
    arr[mainindex++] = left[leftindex++];
  }
  while(rightindex < len2){
    arr[mainindex++] = right[rightindex++];
  }
  delete[] left;
  delete[] right;
}
void mergeSort(int* arr, int s, int e){

  // base case
  if(s >=e){
    return;
  }
  int mid = (s+e)/2;

  // copy left array
  mergeSort(arr,s,mid);

  // copy right array
  mergeSort(arr,mid+1,e);

  // merge array
  merge(arr,s,e);
}

int main(){

  int arr[] = {6,5,4,2,2,2,2,3,2,1};
  int n = 10;
  int s = 0;
  int e  = n-1;

  mergeSort(arr,s,e);

  for(int i =0;i<n;i++){
    cout<<arr[i]<<" ";
  }





  return 0;
}
