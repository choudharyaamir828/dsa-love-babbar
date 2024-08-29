#include<iostream>
#include<string>
using namespace std;
void palindromestring(string s){
    string st;
     for(int i =0;i<s.size();i++){
        for(int j =i;j<s.size();j++){
            cout<<s[j];
        }
        cout<<endl;
     }

    
}
int main(){

    string s = "abc";
    palindromestring(s);

    return 0;
}