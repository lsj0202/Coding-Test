///문자열을 int로 바꿔야 할 상황이 있을때 사용할 수 있습니다.
#include<iostream>
using namespace std;
int main(){
    string s = "1";
    string s2 = "amumu";
    cout << atoi(s.c_str()) << '\n';
    cout << atoi(s2.c_str()) << '\n';
    return 0;
}