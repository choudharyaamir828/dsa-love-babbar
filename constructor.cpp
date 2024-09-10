#include<iostream>
using namespace std;
class Employee {
    public:
    int id ;
    string name;
    float salary;
    Employee(){
        cout<<"my name is aamir";
    }
    Employee(int i,string n,int s){
        id =i;
        name = n;
        salary = s;
    }
    void dispaly(){
        cout<< id << " "<<name<<" "<<salary<<endl;
    }
};
int main(){
    Employee e1 = Employee(101, "aamir",50000.12);;
    Employee e2 = Employee(102,"choudhary",60000);
    Employee e3  = Employee(103,"khan",65000);
    Employee e4 = e3;

    e1.dispaly();
    e2.dispaly();
    e3.dispaly();
    e4.dispaly();
   
    return 0 ;
}
