#include <bits/stdc++.h>
using namespace std; 
queue<int> q;
// FIFO
int main(){
  for(int i = 1; i <= 10; i++)q.push(i); 
  while(q.size()){
    cout << q.front() << ' ';
    q.pop();
  }

  return 0; 
}