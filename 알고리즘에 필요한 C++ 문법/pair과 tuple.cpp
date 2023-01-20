#include<bits/stdc++.h>
using namespace std;
pair<int,int> pt;
tuple <int,int,int> tl;

int a,b,c;
int main(){
  pt = {1,23};
  tl = {1,2,3};
  tie(a,b) = pt;
  cout << a << ':' << b << '\n';
  return 0;
}
