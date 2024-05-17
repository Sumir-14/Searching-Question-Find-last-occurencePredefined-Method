#include <iostream>
#include <algorithm>
#include<vector>
using namespace std;

int main() {
  vector<int> v={1,3,7,7,7,7,7,7,7,7,7,7,7,7,9};
  int target = 7;

  auto ans=upper_bound(v.begin(),v.end(),target);
  cout<<"The last occurence of "<<target<<" is at "<<ans-v.begin()<<"th index."<<endl;
  
  return 0;
}