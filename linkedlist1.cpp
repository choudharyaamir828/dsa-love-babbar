#include<iostream>
using namespace std;
class node
{
	public:
		int data;
		node *next;
		
		node(int a ){
			this -> data = a;
			this -> next = NULL;
		}
};
int main()
{
	node *N = new node(5);
	cout<< N -> data << endl;
	cout<< N-> next << endl;
	return 0 ;
}
