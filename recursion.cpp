#include<iostream>
#include<vector>
#include<limits.h>
#include<string>
using namespace std;
int factorial(int n)
{

	if(n == 0)
	return 1;
	
	return n*factorial(n-1);
	
}

int fibonacci(int n){
	int ans;
	if(n == 0 or n == 1)
	cout<< n;
	
	ans = fibonacci(n-1) + fibonacci(n-2) ;
	 return ans;

	
}
void print(int n){
	if( n == 0){
		return;
	}
	print(n-1);
   
	cout<<n<<" ";
}
void pattern1(int n ){
	for(int i = 1;i<=n;i++)
	{
		for(int j =i;j>=1;j--){
			cout<<j;
		}
		cout<<endl;
	}

	for(int i = 1;i<=n;i++)
	{
		for(int j =n;j>=i;j--){
			cout<<j;
		}
		cout<<endl;
	}
}
void pattern2(int n){
	for(int i =1;i<=n;i++){ 
	for(int j = n;j>i;j--){
		cout<<" ";
	}
	for(int j = 1;j<=i;j++){
		cout<<j<<" ";
	}
	cout<<endl;
	
	
	}
	for(int i= 1;i<n;i++){ 
	for(int j= 1;j<=i;j++){
		cout<<" ";
	}
	for(int j=1;j<=n-i;j++){
		cout<<j<<" ";
	}
	cout<<endl;
	}

}
void pattern3(int n){
	for(int i =1;i<=n;i++){
		for(int j =1;j<= n-i+1;j++){             
			cout<<j;
		}
		cout<<endl;
	}
	
}
void pattern4(int n){
	int odd_place=0;
	int even_place =0;
	for(int i=1;i<=n;i++){
		for(int j =1;j<=n-1;j++){
			cout<<" ";
		}
		
	}
}

int solve(vector<int>& arr,int target){

	if(target == 0){
		return 0;
	}
	if(target <0){
		return INT_MAX;
	}
	int mini = INT_MAX;
	for(int i;i<arr.size();i++){
		int ans = solve(arr,target - arr[i]);
		if(ans != INT_MAX){
			mini = min(mini,ans+1);
		}
	}
	return mini;

}
 int last_occurence_left_to_right(string& s, int x, int i,int& ans ){

	//base case
	if(i > s.size()){
		return ans;
	}


	//ek case
	if(s[i] == x){
		ans = i;
	}

	// recurcive call
	last_occurence_left_to_right(s,x,i+1,ans);
 }

 int last_occurence_right_to_left(string& s,char x,int i,int ans){

	// base case
	if(i < 0){
		return -1;
	}


	//ek case
	if(s[i] == x){
		ans =  i;
		return ans;
	}

	// recurrence
	last_occurence_right_to_left(s, x, i - 1,ans);

 }

 void reverse(string& st, int start, int end){

	if(start >= end){
		return;
	}

	swap(st[start],st[end]);

	reverse(st,start+1,end-1);
 }

 // merge sort 
 
int main()
{
	//int n;
	//cout<<"enter number:";
	// cin>>n;
//	cout<<factorial(n);

//  cout<<" "<<fibonacci(n)<<" ";

//  print(n);
//	pattern1(n);
//	pattern2(n);
//	pattern3(n);


//	vector<int>arr{1,2,3};
//	int target = 5;
//	cout<<"ans is : " << solve(arr , target)<<endl;


	string s;
	char x;
	int ans = -1;

	cout<<"enter string : ";
	cin>>s;
//	cout<<"enter character : ";
//	cin>>x;
//	cout<<"index is "<< last_occurence_left_to_right(s,x,i,ans);

//	cout<<"index is : "<< last_occurence_right_to_left(s,x,s.size()-1,ans);


 cout<<"current string :"<< s <<endl;
 reverse(s,0,s.size()-1);
 cout<<" reversed string :"<<s;

	

	return 0;

	
}
