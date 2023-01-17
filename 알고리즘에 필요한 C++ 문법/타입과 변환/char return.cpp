#include<iostream>
using namespace std;
char b(){
  char a = 'a';
  return a;
}
int main(){
  char a = b();
  cout << a << "\n";
  return 0;
}