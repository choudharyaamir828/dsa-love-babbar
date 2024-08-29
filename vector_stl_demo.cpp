#include<iostream>
#include<vector>
using namespace std;
int main(){

std::vector<int>str;
cout <<  str.size() << endl;
std::vector<int> str2 = {3,2,5,1,7};
cout<< str2.size() << endl;
cout<< str2.at(2) << endl;
str2.pop_back();
str2.push_back(12);
str2.push_back(34);
for(int i =0 ;i< str2.size();i++){
    cout<< str2[i] << " ";
}
cout<< str2.size() << endl;
cout << str2.capacity() << endl;
return 0;
    
}