// https://atcoder.jp/contests/abc069/tasks/abc069_b

#include <iostream>
#include <string>

using namespace std;

int main() {
    string s;
    cin >> s;
    int N = s.length();
    cout << s[0] << N - 2 << s[N - 1] << endl;
}