#include<bits/stdc++.h>
using namespace std;

string str;
int cnt[33];
int main(){
    cin >> str;
    
    for(int n : str){
        cnt[n - 'a']++;
    }
    
    for(int i=0; i<26; i++){
        cout << cnt[i] << " ";
    }
    
    return 0;
}