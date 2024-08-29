#include<iostream>
using namespace std;
class Node{
	public:
	int data;
	Node* next;
	
		Node(int d){
			 data = d;
			 next = NULL;
		}
};
class queue{
	
	Node *front;
	Node  *rear;
	public:
		queue(){
		
		front = NULL;
		rear = NULL;
	}
	
		void enqueue(int d){
			
			Node *node1 = new Node(d);
			if(front== NULL){
				front =node1;
				 rear = node1;
			}
			rear->next = node1;
			rear = node1;
		}
		void dequeue(){
			if(front == NULL){
				cout<<"linked is empty"<<endl;
			}
			front = front->next;
			front = NULL;
			delete front;
			
		}
		void print(){
			Node *temp = front;
			if(front == NULL){
				cout<<"list is empty"<<endl;
			}
			
			while(temp){
				cout << temp -> data <<" ";
				temp = temp->next;
			}
			cout<<endl;
		}
		int peek(){
			if(front->next == -1){
				cout << " list is empty";
				return -1;
			}
			return front->data;
			 
		}
};
int main()
{
	queue q;
	q.enqueue(12);
	q.enqueue(13);
	q.print();
	cout<< q.peek() << endl;
	q.dequeue();
	cout<<q.peek() <<endl;
	
	
	
	return 0;
	
}
