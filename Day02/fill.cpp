#include<bits/stdc++.h>
using namespace std;

int a[10];
int b[10][10];

int main(){
    fill(&a[0], &a[10], 100); // 100으로 배열값 초기화
        for(int i=0; i<10; i++){
            cout << a[i] << ' ';
        }
        cout << '\n';
    fill(&b[0][0], &b[10][10], 2); // 2로 배열값 초기화
        for(int i=0; i<10; i++){
            for(int j=0; j<10; j++){
                cout << b[i][j] << ' ';
            }
            cout << '\n';
        }
    return 0;
}