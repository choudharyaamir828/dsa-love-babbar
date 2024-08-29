#include<iostream>
using namespace std;
int printarray(int arr[], int size){
	for (int i =0 ;i<size;i++)
	{
		cout << arr[i] << " ";
	}
}
int swap_alternator(int arr[],int size){
	for (int i =0 ;i < size ; i += 2){
		if (i + 1 < size){
			int temp;
			temp = arr[i+1];
			arr[i+1] = arr[i];
			arr[i] = temp;
		}
	}
}
int main(){
	int a[6] = {4,8,2,9,1,3};
	int odd[7]= {7,2,5,9,1,8,0};
	swap_alternator(a, 6) ;
	printarray(a,6);
	cout << endl;
	swap_alternator(odd,7);
	printarray(odd,7);
	
	
	
	return 0;
}
