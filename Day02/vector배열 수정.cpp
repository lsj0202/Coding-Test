#include<bits/stdc++.h>
using namespace std;
vector<vector<int>> v;
vector<vector<int>> v2(10, vector<int>(10, 0)); 
vector<int> v3[10];

  void go(vector<vector<int>> &v){
      v[0][0] = 100;
  }
  void go2(vector<vector<int>> &v){ 
      v[0][0] = 100;
  }
  void go3(vector<int> v[10]){
      v[0][0] = 100;
  }
  int main(){
      vector<int> temp; temp.push_back(0); 
      v.push_back(temp);
      v3[0].push_back(0);
      go(v); 
      go2(v2); 
      go3(v3);
      cout << v[0][0] << " : " << v2[0][0] << " : " << v3[0][0] << '\n'; 
     
      return 0;
}