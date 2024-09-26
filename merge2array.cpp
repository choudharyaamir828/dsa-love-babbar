#include<iostream>
using namespace std;

int main(){
    int arr1[] = {2,4,6,8,10};
    int arr2[] = {1,3,5,7,9};
   

    int len1 = sizeof(arr1)/sizeof(arr1[0]);
    int len2 = sizeof(arr2)/sizeof(arr2[0]);
    int len3 = len1 + len2;
     int arr[len3];
    int i =0;
    int j = 0;
    int k = 0;

    while(i<len1 && j < len2){
        if(arr1[i]< arr2[j]){
            arr[k++] = arr1[i++];
        }
        else{
            arr[k++] = arr2[j++];
        }

    }
    while(i < len1){
        arr[k++] = arr1[i++];
    }
    while(j<len2){
        arr[k++] = arr2[j++];
    }

   for (int i = 0; i < len3; i++) {  
        cout << arr[i] << " ";  
    }



    return 0;
}