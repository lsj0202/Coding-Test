#include<iostream>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    string s = "123";
    s[0]++;
    cout << s << '\n'; //223 (_아스키 코드 때문이다._)
    return 0;
}