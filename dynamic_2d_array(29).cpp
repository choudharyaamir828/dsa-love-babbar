#include<iostream>
#include<cstdlib>
using namespace std;

int main()
{

    int n,m;
    cout<<"enter row:"<<endl;
    cin>>n;
    cout<<"enter column:"<<endl;
    cin>>m;


    int **arr = new int*[n];
    for(int i =0;i<n;i++)
    {
    	arr[i]= new int[m];
	}
    cout<<"enter the array element:"<<endl;
    
    for(int i=0;i<n;i++)
	{
    	for(int j =0;j<m;j++)
    	{
    		cin>>arr[i][j];
		}
	
    	
     }
     for(int i=0;i<n;i++)
	{
    	for(int j =0;j<m;j++)
    	{
    		cout<<" "<<arr[i][j]<<" ";
		}
		cout<<endl;
    	
     }
     for(int i =0;i<n;i++){        // delete all row
     	delete [] arr[i];
	 }
	 delete []arr  ;         // delete all column

    	return 0;
	}
