#include<iostream>
using namespace std;
int main(){

    int arr[3][3];
    int sum = 0;
    cout<< "enter number ->";
    for(int i =0;i<3;i++){
        for(int j =0;j<3;j++){
            cin >> arr[i][j] ;
        }
    }

     for(int i =0;i<3;i++){
        for(int j =0;j<3;j++){
            sum = sum + arr[i][j] ;
        }
    }
    cout<<endl;
    cout<<"the sum is :"<<sum<<endl;
    cout<<"the maxtrix is :"<<endl;
    for(int i =0;i<3;i++){
        for(int j =0;j<3;j++){
            cout <<  arr[i][j] <<  " ";
        }
        cout<<endl;
    }
    return 0;
}