// https://atcoder.jp/contests/abc064/tasks/abc064_a

#include <iostream>

using namespace std;

int main() {
    // r, g, bは1以上9以下の整数が入力される
    int r, g, b;
    cin >> r >> g >> b;
    
    // r, g, bから3桁の数字を作る
    int rgb = r*100 + g*10 + b;

    // 作成した3桁の数字が4の倍数か判定する
    if ((rgb % 4) == 0)
      cout << "Yes" << endl;
    else
      cout << "No" << endl;
}