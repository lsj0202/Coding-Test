#include<bits/stdc++.h>
using namespace std;

int main(){
  vector<int> a = {1, 2, 3};
  do
  {
    for(int n: a)
      cout << n << " ";
    cout << '\n';
  } while (next_permutation(a.begin(), a.end())); // 모든 경우의수 (순서 상관있이)

      return 0;
}