#include<iostream>
using namespace std;

int main(){
    int n=5;
  int p[]={5,4,6,2,7};  
  int m[5][5]={0};
  int s[5][5]={0};
  int i,j,k,q;
  for(int d=1;d<n;d++){
    for(i=1;i<n;i++){
        j=i+d;
       int mn=32768;
        for(k=i;k<=j-1;k++){
            q=m[i][k]+m[k+1][j]+p[i-1]*p[k]*p[j];

        if(q<mn){
                mn = q;
                s[i][j] = k;
            }
        

        }
    m[i][j] = mn;
    }
  }
 cout<<"total number of operations: " << m[1][n-1];



    return 0;
}