#include<bits/stdc++.h>
using namespace std;

int main(){
  int a[] = {1, 2, 3};
  do{
    for(int n: a)
      cout << n << " ";
    cout << '\n';
  } while (next_permutation(a, a + 3)); // 모든 경우의수 (순서 상관있이)

      return 0;
}