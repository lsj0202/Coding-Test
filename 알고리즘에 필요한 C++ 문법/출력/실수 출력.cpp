#include<iostream>
using namespace std;
typedef long long ll;
double a = 1.23456789;

int main(){
    cout << a << "\n"; //1.234567  *기존 printf는 소수점 6 자리까지만 출력함.
    cout.precision(7);
    cout << a << "\n"; //1.2345678 
    return 0;
}