#include<iostream>
#include<cstdlib>
using namespace std;
int sum(int arr[],int n)
{
	int sum =0;
	for(int i=0;i<n;i++){
		sum +=arr[i];
	}
	return sum;
}
int main()
{

    int n;
    cout<<"enter number:"<<endl;
    cin>>n;
    
    int *arr = new int[n];
    cout<<"enter the array element:"<<endl;
    for(int i=0;i<n;i++)
	{
    	cin>> arr[i];
    	
     }
    int ans = sum(arr,n);
    cout<<"answer is :"	<<ans<<endl;
     delete []arr;
    	return 0;
	}
