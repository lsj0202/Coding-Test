#include<iostream>

using namespace std;
//C++에서는 STL에서 split() 함수를 지원하지 않습니다. 그렇기 때문에 만들어야합니다.
vector<string> split(string input, string delimiter) {
    vector<string> ret;
    long long pos = 0;
    string token = "";
    while ((pos = input.find(delimiter)) != string::npos) {
        token = input.substr(0, pos);
        ret.push_back(token);
        input.erase(0, pos + delimiter.length());
    }
    ret.push_back(input);
return ret;
}
int main(){
    string s = "안녕하세요 저는 이상진입니다!", d = " ";
    vector<string> a = split(s, d);
    for(string b : a) cout << b << "\n";
}
