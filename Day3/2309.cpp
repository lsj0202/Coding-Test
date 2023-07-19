#include<bits/stdc++.h>
using namespace std;

int a[11];
int main(){
    for(int i=0; i<9; i++){
        cin >> a[i];
    }
    
    sort(a, a + 9);
    do{
        int sum = 0;
        for(int i=0; i<7; i++){
            sum += a[i];
        }
        if(sum == 100) break;
    }while(next_permutation(a, a + 9));
    for(int j=0; j<7; j++){
        cout << a[j] << "\n";
    }
    return 0;
}