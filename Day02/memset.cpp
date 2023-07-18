#include <bits/stdc++.h>
using namespace std; 
const int max_n = 1004; 
int a[max_n];
int a2[max_n][max_n];
int main() {
    memser(a, -1, sizeof(a));
    memset(a2, 0, sizeof(a2));
    for (int i = 0; i < 10; i++)
      cout << a[i] << " ";
    for(int i = 0; i < 10; i++) cout << a2[i][i] << " ";
    
    return 0;
}