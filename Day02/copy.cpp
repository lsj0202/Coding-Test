#include<bits/stdc++.h>
using namespace std; 

int main(void) {
    vector<int> v {1, 2, 3};
    vector<int> ret(3);
    copy(v.begin(), v.end(), ret.begin());
    // v : 복사당하는 vector / ret : 복사하는 vector
    cout << ret[1] << "\n";
    ret[1] = 100;
    cout << ret[1] << "\n"; 
    cout << v[1] << "\n"; 

    return 0;
}