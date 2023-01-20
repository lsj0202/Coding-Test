#include<iostream>
using namespace std;
pair<int, int> pi;
tuple<int,int,int> tl;
int a,b,c;

int main(){
    pi = {1,2};
    tl  = make_tuple(1,2,3);
    tie(a,b) = pi;
    cout << a << ":" << b << "\n";
    tie(a,b,c) = tl;
    cout << a << ":" << b << ":" << c << "\n"; //솔직히 세 가지 이상의 멤버변수가 필요하다면 tuple 보다는 struct 를 쓰는것이 좋다.
    return 0;
}