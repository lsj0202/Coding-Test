#include <bits/stdc++.h>
using namespace std;
// 배열의 크기를 정할 때 const int로 하면 실수를 방지 할 수 있습니다.
// 어떤 순간에는 1004, 1000 이렇게 사용자의 실수를 방지함.
const int max_n = 1004;
// 초기화 값이 길 경우, const로 선언해 놓는게 좋습니다.
const int INF = 987564321;
// vector 10개를 생성
vector<int> v[10];
// 초기값이 0인 vector 1개를 생성
vector<int> v2(10, 0);
// 크기 10 * 10, 초기값은 0 2차원 vector 생성
vector <vector<int> > v3(10, vector<int>(10, 0));
// 크기가 정해지지 않은 2차원 vector 생성
vector<vector<int> > v4;
// 1차원 배열을 만들어서 0으로 초기화하는 방법입니다.
// 그러나 일부 컴파일러에서 통하지 않을 수도 있으니 쓰지 않는 것이 좋습니다.
int dp[10] = {0,};
// 1차원 배열 a, 2차원 배열 a2
int a[max_n];
int a2[max_n][max_n];
int main() {
    // 이터레이터 기반으로 초기화
    fill(v2.begin(), v2.end(), INF);
    // 10으로 초기화, 1004까지 전체적으로 초기화 합니다.
    fill(a, a + max_n, 10);
    // fill을 이용한 2차원 배열 초기화 방법 1
    for(int i = 0; i < max_n; i++) fill(a2[i], a2[i] + max_n, INF);
    // fill을 이용한 2차원 배열 초기화 방법 2 [이걸 추천합니다.]
    fill(&a2[0][0], &a2[0][0] + max_n * max_n, INF);
    return 0;
}

