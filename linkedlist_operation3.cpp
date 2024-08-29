#include<iostream>
using namespace std;
class Node{
	public:
		int data;
		Node * next;
	 Node(int a){
		this -> data = a;
		this -> next = NULL;
	}
		
};
void insertathead(Node* &head,int d){
	Node * temp = new Node(d);
	temp -> next = head;
	head = temp;
	
}

void  print(Node* &head)
{
	Node* temp = head;
	while(temp != NULL){
	cout<< temp -> data <<" ";
	temp = temp -> next;
    }
cout<<endl;
}
void insertattail(Node* &tail,int d){
	Node* temp = new Node(d);
	tail -> next = temp;
	tail = temp;
}
void insertatpos(Node * &head, int pos,int d){
	Node* temp = head;
	int cnt = 1;
	while(cnt < pos-1){
		temp = temp -> next;
		cnt++;
	}
	Node* insertnode = new Node(d);
	insertnode -> next = temp -> next;
	temp -> next = insertnode;
}
	
int main()
{
	Node* node1 = new Node(9);
		

	Node* head = node1;
	Node* tail = node1;

	insertattail(tail,12);
	insertattail(tail,14);
	insertattail(tail,15);
	insertattail(tail,16);
	insertattail(tail,17);
	insertatpos(tail,4,18);
	print(head);
	
	return 0;
	
}
