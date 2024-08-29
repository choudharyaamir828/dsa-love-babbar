//quick sort 
#include<iostream>
#include<math.h>
using namespace std;

int  partation(int *arr,int s,int e){
    int pivot = arr[s];
    int i = s;
    int j = e;
    while(i< j){
        while(arr[i] <= pivot){
            i++;
        }
        while(arr[j] > pivot){
            j--;
        }
        if(i<j){
            swap(arr[i],arr[j]);
        }

    }
    swap(arr[s], arr[j]);
    return j;
}
int  quicksort(int *arr,int s,int e){
    int i,j;
    if(i>= j){
        return 0;
    }
    int p = partation(arr,s,e);
    quicksort(arr,s,p-1);
    quicksort(arr,p,e);

}
void printarray(int *arr, int n){
    for(int i =0;i<n;i++ ){
        cout<< arr[i] << " ";
    }
}
int main(){

int a[] = {0,12,13,2,1};
quicksort(a,0,5);
printarray(a,5);


    return 0;
}
