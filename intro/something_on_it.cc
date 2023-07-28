// https://atcoder.jp/contests/abc095/tasks/abc095_a

#include <iostream>
#include <string>

using namespace std;

int main() {
    string s;
    cin >> s;

    int value = 700;
    if (s[0] == 'o')
      value += 100;
    if (s[1] == 'o')
      value += 100;
    if (s[2] == 'o')
      value += 100;

    cout << value << endl;
}