#include<iostream>
#include<array>
using namespace std;
int main (){
	array<int,4> a = {4,3,21,1};
	int size = a.size();
	cout<<"second element:" << a.at(3) << endl;
	return 0;
}
