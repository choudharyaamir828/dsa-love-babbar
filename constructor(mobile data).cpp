#include<iostream>
using namespace std;
class Node{
	int data;
	Node *next;
	public:
		Node(int d){
			this -> data = d;
		}
	
};
class queue{
	Node front , rear;
	public:
		void enqueue(int d){
			Node node1 = new Node(d);
			if(front == rear){
				front = rear = node1;
				rear 
			}
		}
};
