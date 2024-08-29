#include<iostream>
#include<vector>
using namespace std;
int countprime(int n){
	int cnt = 0;
		vector<bool>prime(n,true);
		
		prime[0]=prime[1]= false;

		for(int i = 2;i<n;i++){
			
			if(prime[i]){
			 cnt++;
			for(int j = 2*i;i<n;j =j+i)
			{
				prime[j] = 0;
			}
		}
		
		}
	return cnt;
			
}	
int main(){
	cout<<countprime(40)<<endl;
	return 0;
}
