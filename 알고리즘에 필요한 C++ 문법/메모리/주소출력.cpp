#include<iostream>
using namespace std;
int i;

int main() {
    cout << &i << '\n';
    i = 0;
    cout << &i << '\n';

    return 0;
}