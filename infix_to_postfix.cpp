//Using inbuilt stack library to create stack
#include <iostream>
#include <stack>
using namespace std;

int precidence (char ch){
    if(ch== '+' || ch =='-')
        return 1;
 
    if(ch == '*' || ch =='/')
        return 2;
 
    if(ch== '^')
        return 3;

 
    return 0;
}
string infix_to_postfix(string st)
{
    int i = 0;
    string postfix = " ";
    
    stack <int>s;

    while(st[i] != '\0')
    {
        // print operend

        if(st[i]>='a' && st[i]<='z'|| st[i]>='A'&& st[i]<='Z')          
        {
            postfix += st[i];
            i++;
        }

        // if opening bracket then push into the  stack

        else if(st[i] == '(')
        {
            s.push(st[i]);
            i++;
        }
        // for closing bracket keep poping form the stack and print til '( ' is found
        
        else if(st[i]==')')
        {
            while(s.top()!='('){
                postfix += s.top();
                s.pop();
            }
            s.pop();
            i++;
        }
        else            
        {
            while (!s.empty() && precidence(st[i]) <= precidence(s.top())){
                postfix += s.top();
                s.pop();
            }
            s.push(st[i]);
            i++;
        }
    }
    while(!s.empty()){
        postfix += s.top();
        s.pop();
    }


    cout << "Postfix is : " << postfix;      //it will print postfix conversion  
    return postfix;
}

int main()
{
    string infix = "a*b/(a+b)/d+f*(r-t)*a*b-(r+q)"; 
    string postfix;
    postfix = infix_to_postfix(infix);
    
    return 0;
}