// https://atcoder.jp/contests/abc081/tasks/abc081_a

#include <iostream>
#include <string>

using namespace std;

int main() {
    string s;
    // 1と0からなる3桁の番号が与えられる(文字列として)
    cin >> s;
    // 各桁に1が含まれていればカウントする
    int counter = 0;
    if (s[0] == '1')
      ++counter;
    if (s[1] == '1')
      ++counter;
    if (s[2] == '1')
      ++counter;

    cout << counter << endl;
}