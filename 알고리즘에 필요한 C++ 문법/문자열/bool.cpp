#include<iostream>
using namespace std;
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	int a = -1;
	cout << bool(a) << '\n';
	a = 0;
	cout << bool(a) << '\n';
	a = 3; 
	cout << bool(a) << '\n';
	
	return 0;
}
//0이면 false이고 0이 아니면 true 입니다.