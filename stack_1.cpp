#include<iostream>
using namespace std;

class stack{
	public:

	int size;
	int *arr;
	int top;


		stack(int size1){
			this -> size = size1;
			arr = new int[size1];
			top = -1;
		}
	void push(int d){
		if(size-top > 1)
		{
			top++;
			arr[top] = d;
		}
		else{
			cout<<"overflow condition"<<endl;
		}
	}
	void pop(){
		if(top > -1){
			top--;
			
		}
		else{
			cout<<"stack underflow"<<endl;
		}
	}
	int peek(){
		if(top >= 0){
			return top;
		}
		else{
			cout<<"stack is empty"<<endl;
		}
	}
	bool isempty(){
		if(top == -1){
			return true;
		}
		else{
			return false;
		}
	}
		
		
		
};
int main(){
	stack st(6);
	st.push(3);
	st.push(4);
	st.push(6);
	st.push(7);
	st.push(9);
	st.push(10);
	cout<< st.peek() << endl;
	return 0;
	
	
}









