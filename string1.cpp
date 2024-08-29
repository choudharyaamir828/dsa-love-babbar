#include<iostream>
using namespace std;

void  first_nondublicate(string s){
    char st = '\0';
    
    for( int i =0;i<s.length();i++){
        bool isDuplicate = false;
        for( int j =i+1;j<s.length();j++){
            if( s[i] == s[j]){
                isDuplicate = true;

            }
           
        }
        if(!isDuplicate){
            st = s[i];
            break;
        }
        
    }
    if (st != '\0')
    {
        cout<<"first non repeating element :  " << st<<endl;
    }
    else{
        cout<<"no non-repeating element "<<endl;
    }
    
}

int main(){
    string s;
    cout<<"enter the stirng : ";
    cin>>s;
    first_nondublicate(s);
    


    return 0;
}