#include <bits/stdc++.h>
using namespace std;
int main(){
    vector<int> s2 {4, 3, 3, 5, 1, 2, 3}; 
    sort(s2.begin(), s2.end()); 
    s2.erase(unique(s2.begin(),s2.end()), s2.end());
    for(int i : s2) cout << i << " ";
    return 0;   
}