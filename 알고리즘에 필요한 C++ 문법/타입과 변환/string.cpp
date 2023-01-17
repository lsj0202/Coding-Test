//char과 string중 string을 선호하는것이 C++로 알고리즘을 짤때 유리하고합니다.
#include<iostream>
using namespace std;

int main(){
    string a = "I'm SangJin";
    cout << a[0] << '\n';
    cout << a[0] << a[1] << a[2] << '\n';
    cout << a << '\n';
    string b = "abc";
    cout << b[0] << '\n';
    cout << b << '\n';
    cout << b[2] << '\n';
    return 0;
}


//여기서 한국어와 영어의 차이를 보자면 한국어는 한 글자당 3바이트 이지만 영어는 한 글자당 1바이트로 6번째 줄에 한국어를 입력한다면 에러가 날 수 있는 상황이 만들어 질 수 있다.

