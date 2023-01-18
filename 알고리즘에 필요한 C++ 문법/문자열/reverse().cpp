#include<iostream>
using namespace std;
int main(){
    string a = "It's hard to have a sore leg";
    reverse(a.begin(), a.end());
    cout << a << '\n';
    reverse(a.begin(), a.end());
    cout << a << '\n';
    reverse(a.begin() + 3, a.end()); //시작위치를 정하고 그 위치의 개수만 정한뒤 바꿀 수 있다.
    cout << a << '\n';

    return 0;
}