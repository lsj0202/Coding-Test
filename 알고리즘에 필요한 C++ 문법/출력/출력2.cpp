#include<iostream>
using namespace std;
int a = 1;
char s = 'a';
string str = "어벤져스";
double b = 1.232323;

int main(){
    printf("아이엠 아이언맨 : %d\n",a);
    printf("아이엠 아이언맨 : %c\n",s);
    printf("아이엠 아이언맨 : %s\n",str.c_str()); //c_str() 함수를 사용하여 출력 **문자열에 대한 포인터로 바꿔주기 위해서**
    printf("아이엠 아이언맨 : %lf\n",b);
    return 0;
}