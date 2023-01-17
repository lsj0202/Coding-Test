#include<iostream>
using namespace std;
int R;
string s;

int main(){
    cin >> R;
    string bufferflush;
    getline(cin, bufferflush);
    for(int i=0; i< R; i++){
        getline(cin, s);
        cout << s << '\n';
    }
    return 0;
}

/*
bufferflush를 사용한 이유는 R을 입력 하면 엔터(\n)가 들어가 3을 cin 받아도 문자열을 입출력 하는 것이 2번 밖에 되지 않는 것을 방지하기 위함이다.
 
결론은 필요없는 엔터를 삭제시켜 주는역할을 하는것이 bufferflash이다.
*/