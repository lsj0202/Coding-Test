//오버플로란 타입의 허용법ㅁ위를 넘어갈 때 발생하는 에러를 뜻합니다. 예를 들어 int 타입 이라면 2,147,483,647을 넘어간다면 에러가 발생합니다.
//다음의 최대범위를 벗어나게 된다면 최댓값 +1이 아닌 최솟값으로 돌아가게 되버립니다.

#include<iostream>
using namespace std;

int main(){
    int a = 2147483647;
    cout << a << '\n';
    a++;
    cout << a << '\n';
    return 0;
}