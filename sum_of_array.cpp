#include<iostream>
using namespace std;
int main()
{
	int arr[20];
	int n;
	cout << "enter size:" << endl;
	cin >>n; 
	int sum = 0;
	cout << "enter array: " << endl;
	for (int i = 0; i<n; i++)
	{
		cin >> arr[i];
	}
	for(int j =0; j<n;j++)
	{
		sum = sum + arr[j];
	}
	cout << "sum is :"<<sum;
}
