#include<iostream>
#include<vector>
using namespace std;

int main(){
  string a = "love is";
  a += " pain!";
  a.pop_back(); //C++의 push_back() : 맨뒤에 요소 삽입
  cout << a << ":" << a.size() << "\n";
  cout << char(* a.begin()) << '\n';
  cout << char(* (a.end() - 1)) << '\n';
  a.insert(0,"test ");
  cout << a << ":" << a.size() << "\n";
  auto it = a.find("love");
  if(it != string::npos){
    cout << "포함되어 있다." << '\n';
  }
  cout << it << '\n';
  cout << string::npos << '\n';
  cout << a.substr(5,2) << '\n';
  
  return 0;
}