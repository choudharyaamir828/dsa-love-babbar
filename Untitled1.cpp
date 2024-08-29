#include<iostream>
#define MAXSIZE 4

using namespace std;

int stack[MAXSIZE];
int top=-1;
void push()
{
    int item;

    cout<<"Enter the item for push:";
    cin>>item;

    if(top==MAXSIZE-1)
        cout<<"Stack is overflow"<<endl;
    else
    {
        top++;
        stack[top]=item;
    }
}
void pop()
{
    if(top==-1)
        cout<<"Stack is Underflow"<<endl;
    else
    {
        cout<<"Element popped from stack: "<<stack[top]<<endl;
        top--;
    }

}
void display()
{
	if(top>= 0){
		cout<<"stack elements are :";
		for(int i =top; i>=0;i--){
			cout<<stack[i] <<" ";
		}
	}
	else{
			cout<<"stack is empty";
			cout<<endl;
		}
	}

int main()
{
	int ch;
	cout<<endl;
		cout<<"1 for push"<<endl;
		cout<<"2 for pop "<<endl;
		cout<<"3 for display"<<endl;
		cout<<"4 for exit "<<endl;
		cout<<endl;

	do
	{
		
		cout<<"enter choice:";
		
		cin>>ch;
		switch(ch)
		{
			case 1:
				push();
				break;
			case 2:
				pop();
				break;
			case 3:
				display();
				break;
			case 4:
				exit(0);
			default:
				cout<<"enter correct";
				cout<<endl;
		}
	}while(1);
}
