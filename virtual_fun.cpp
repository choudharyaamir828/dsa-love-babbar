#include<iostream>

using namespace std;
/*
int main()
{
	queue<int> q;
	q.push(12);
	q.push(13);
	q.push(15);
	q.push(16);
	cout<<q.front() << endl;
	cout<<q.size() << endl;
	q.pop();
	cout<<q.front() << endl;
	cout<<q.size() << endl;
	if(!q.empty()){
		cout<<"queue is not empty"<<endl;
	}
	else{
		cout<<"queue is empty"<<endl;
	}
	
	return 0;
}*/
class queue{
	public:
	int *arr;
	int qfront;
	int rear;
	int size;
	public:
		queue(){
			 size = 3;
			arr = new int[size];
			qfront = 0;
			rear = 0;
			
		}
	void enqueue(int data){
		if(rear == size){
			cout<<" queue is full"<<endl;
		}
		else{
		   arr[rear] = 	data;
		   rear++;
		}
	}
	int  deueue() {
		if(qfront == rear){
			return -1;
		}
		else{
			int ans = arr[qfront];
			arr[qfront] = -1;
			qfront++;
			if(qfront ==  rear){
				qfront = 0;
				rear = 0;
			}
			return ans;
		}
	 
	}
	int peek(){
		if(qfront == rear){
			return -1;
		}
		else{
			return arr[qfront];
		}
	}
	bool ismepty(){
		if(qfront == rear){
			return true;
		}
		else{
			return false;
		}
	}
	
};
int main(){
	queue q;
	q.enqueue(10);
	q.enqueue(11);
	q.enqueue(13);
	if(!q.ismepty()){
		cout<<"is not empty"<<endl;
		
	}
	else{
		cout<<"is empty"<<endl;
	}
	cout<<q.peek()<<endl;
	q.deueue();
	cout<<q.peek()<<endl;
	q.enqueue(18);

	return 0;
	
}	











