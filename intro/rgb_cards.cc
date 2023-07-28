// https://atcoder.jp/contests/abc064/tasks/abc064_a

#include <iostream>

using namespace std;

int main() {
    int r, g, b;
    cin >> r >> g >> b;

    int rgb = r*100 + g*10 + b;

    if ((rgb % 4) == 0)
      cout << "Yes" << endl;
    else
      cout << "No" << endl;
}