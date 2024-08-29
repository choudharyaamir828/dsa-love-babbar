#include<iostream>
#include<string>
using namespace std;
bool comparestr(string a, string b){
    if(a.begin() != b.begin())
        return false;
    
   
    for(int i =0;i<a.length();i++){
        if(a[i] != b[i]){
            return false;
        }
    }
    return true;

}
int main(){
    string a = "abvd";
    string b = "abvd";

   
    if(a.compare(b) == 0){
        cout<<"string are same"<<endl;
    }
    else{
        cout<<"string are not same"<<endl;
    }
    return 0;
}
