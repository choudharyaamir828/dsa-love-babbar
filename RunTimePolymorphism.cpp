#include<iostream>
#include<string>
using namespace std;

class animal{
    public:
    string name;

 virtual  void speak(){
        cout<<"speaking"<<endl;
    }

    virtual void Name(){
        cout<<"my name is animal "<<endl;
    }




};
class dog:public animal{
    public:

    void speak(){
        cout<<"barking"<<endl;
    }
    void Name(){
        cout<<"my name is dog"<<endl;
    }
};
int main(){

    

    // animal* a = new dog;
    //  a->Name();


    return 0;
}