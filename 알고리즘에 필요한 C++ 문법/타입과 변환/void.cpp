// void : 리턴 값이 없다.
#include <iostream>
using namespace std;
int ret = 1;

void a(){
    ret = 2;
    cout << ret << "\n";
    return;
}
int main(){
    a();
    return 0;
}

