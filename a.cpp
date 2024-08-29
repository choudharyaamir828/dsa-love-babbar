#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int n,q;
	    cout<<"enter size:";
	    cin>>n;
	    int arr[n] ={0};
	    cout<<"enter array:";
	    for(int i = 0;i<n;i++){
	        cin>>arr[i];
	    }
	    for(int i =0;i<n;i+2){
	       arr[i] +1;
	    }
	     for(int j= 1 ;j<n;j+2){
	            
	            arr[j] - 1;
	        }
	    cout<<"the array is :";
	    for(int i = 0;i<n;i++){
	        cout<<arr[i];
	    }
	}
	return 0;
}

