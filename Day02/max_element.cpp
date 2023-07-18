#include <bits/stdc++.h>
using namespace std;

int main(){
    vector<int> v = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int a = *max_element(v.begin(), v.end()); 
    cout << a << '\n'; // 1
    
    return 0;
}