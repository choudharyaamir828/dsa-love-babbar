#include<iostream>
using namespace std;
int root(int n){
	int s = 0;
	int e = n;
	int ans =0;
	int mid = s + (e-s)/2;
	while(s<=e){
		int square = mid*mid*mid;
		if(square == n){
			return mid;
		}
		if(square < n){
			ans = mid;
			s = mid + 1;
		}
		else{
			e = mid-1;
		}
		mid = s + (e-s)/2;
	}
	return ans;
}
int main(){
	int num;
	cout<< "enter number:" ;
	cin>> num;
	cout<<"root is "<<root(num);
	return 0;
}
