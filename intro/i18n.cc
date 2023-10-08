// https://atcoder.jp/contests/abc069/tasks/abc069_b

#include <iostream>
#include <string>

using namespace std;

int main() {
    string s;
    cin >> s;

    if (s.length() >= 3) {
        string in_s;
        in_s.assign(s.begin() + 1, s.end() - 1);
        string in_s_length = to_string(in_s.length());
        cout << s[0] + in_s_length + s[s.length() - 1] << endl;
    }
}