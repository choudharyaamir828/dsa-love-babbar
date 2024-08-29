#include<iostream>
#include<array>
using namespace std;
int main()
{
    std::array<int,5> str;
    int size_of_stl = 0;
    size_of_stl = str.size();
    cout<< "enter the numbers:" << endl;
    for(int i = 0; i< size_of_stl ; i++){
        cin>>str[i];
    }
    for(int j =0; j< size_of_stl; j++){
        cout << str[j];
    }
    

    return 0;
}