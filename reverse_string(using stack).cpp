#include<iostream>
#include<stack>
using namespace std;
string reverse_str(string str){
		stack<char> s;
	for(int i = 0;i<str.length();i++)
	{
		char ch = str[i];
		s.push(ch);
	}
	string ans = "";
	while(!s.empty()){
		char ch = s.top();
		ans.push_back(ch);
	s.pop();
	}
	return ans;
}
int main()
{
	string st = reverse_str("aamir");

	cout << "reverse string is : "<< st << endl;
	string st2 = reverse_str("choudhary");
	
	cout << "reverse string is : "<< st2 << endl;
	return 0;
}
