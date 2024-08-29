#include<iostream>
#include<queue>
using namespace std;
int main()
{
	queue<int > q;
	int n;
	for(int i=1;i<5;i++)
	{
		cout<<"enter the value of n ->";
		cin>>n;
		q.push(n);
	}
	cout<<q.size() <<endl;
	return 0;
}

