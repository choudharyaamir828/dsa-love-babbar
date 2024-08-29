#include<iostream>
#include<algorithm>
using namespace std;
 bool containsDuplicate(vector<int>& nums) {
        int i =0;
        int flag =false;
        int n = nums.size();
        sort(nums.begin(),nums.end());
       for(int i =0 ;i<n-1;i++){
          if(nums[i] == nums[i+1]){
              flag = true;
          }
       }
        
        return flag;
    }
int main(){
    vector<int>v{1,1,1,1,3,3,4,3,2,4,2};
   
    if( containsDuplicate(v)){
        cout<<"true";
    }
    else
    cout<<"false";

    return 0;

    
}