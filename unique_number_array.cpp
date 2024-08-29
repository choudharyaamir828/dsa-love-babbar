#include <iostream>
using namespace std;
using namespace std;
int unique(int arr[], int size){
    int a[] = {0};
    int ans;
    
    for (int i =0 ; i<size ;i++)
    {
        if (arr[i] == arr[i+1]){
            
            ans = a[i];
        }
    }
    return ans;
    
}
 int printarray(int arr[],int size){
 	for (int j = 0; j< size;j++)
	{
		cout << arr[j];
	}
 }
 int inputarray(int arr[],int size){
 	for (int i=0; i<size; i++){
		cin >> arr[i];
	}
 	
 }

int main() {
	int uni[100];
	int n;
	cin >> n;
    inputarray(uni,n);
    unique(uni,n);
    printarray(uni,n);
    
}

