#include<bits/stdc++.h>
using namespace std; 

vector<int> a;
int b[5];

int main(void) {
    for(int i = 5; i >= 1; i--) b[i - 1] = i;
    for(int i = 5; i >= 1; i--) a.push_back(i); // 오름차순
    
    for(int i : b) cout << i << ' '; cout << '\n';
    for(int i : a) cout << i << ' '; cout << '\n';

    sort(b, b + 5);
    sort(a.begin(),a.end());
    
    for(int i : b) cout << i << ' '; cout << '\n';
    for(int i : a) cout << i << ' '; cout << '\n';

    return 0;
}