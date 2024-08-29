#include <iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<climits>
using namespace std;
int minimumdifference(vector<string>timePoints){
  vector<int>minutes;
  int n = timePoints.size();
  for(int i =0;i<n;i++){
    string curr = timePoints[i];
    int hours = stoi(curr.substr(0,2));
    int mint = stoi(curr.substr(3,2));
    int totalminutes = (hours*60) + mint;
    minutes.push_back(totalminutes);
  }
  sort(minutes.begin(),minutes.end());
  int mini = INT_MAX;
  for(int i =0;i<n-1;i++){
    int d = minutes[i+1] - minutes[i];
    mini = min(mini,d);
  }

  return mini;

}
int main() {
  vector<string>timePoints{ "10:30","11:40","14:50","12:20"};

  cout<<"the minimum difference is : "<<minimumdifference(timePoints)<<endl;
 
  return 0;
}