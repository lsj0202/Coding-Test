#include<bits/stdc++.h>
using namespace std; 

int main(void) {
    int v[3] = {1, 2, 3};
    int ret[3];
    memcpy(ret, v, sizeof(v) ); // 특정 메모리값 복사 Array에서만 사용가능
    cout << ret[1] << "\n"; ret[1] = 100;
    cout << ret[1] << "\n";
    cout << v[1] << "\n";

    return 0;
}