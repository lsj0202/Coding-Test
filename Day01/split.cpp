#include<bits/stdc++.h>
using namespace std;

vector<string> split(string input, string delimeter){
    vector<string> newArr;
    string token;
    long long int pos = 0;
    while((pos = input.find(delimeter)) != string::npos){
        token = input.substr(0, pos);
        newArr.push_back(token);
        input.erase(0, pos+delimeter.length());
    }
    newArr.push_back(input);
    return newArr;
}

int main(){
    string a = "이상진 상진 진", b = " ";
    vector<string> ab = split(a, b);
    for(string n: ab){
        cout << n << '\n';
    }
    return 0;
}