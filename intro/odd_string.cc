// https://atcoder.jp/contests/abc072/tasks/abc072_b

#include <iostream>
#include <string>

using namespace std;

string s;

int main() {
    cin >> s;

    string result;
    for (int i=0; i<s.length(); ++i) {
        if (i % 2 == 0) {
            result += s[i];
        }
    }

    cout << result << endl;
}