#include<iostream>
using namespace std;
int print_sum(int *arr, int n){
	int sum = 0;
	for(int i = 0;i<n;i++)
	{
		sum += i[arr];
	}
	return sum;

}
int main(){
	int arr[6] = { 4,5,6,7,8,9};
	cout<<"sum is :"<<print_sum(arr+3,3)<<endl ;
	
	
	return 0;
}
