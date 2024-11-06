// https://atcoder.jp/contests/abc085/tasks/abc085_a

#include <iostream>
#include <string>

using namespace std;

int main() {
    string s;
    cin >> s;

    string first = s.substr(0, 4);

    if (first != "2018") {
        s.replace(0, 4, "2018");
    }

    cout << s << endl;
}