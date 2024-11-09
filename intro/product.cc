// https://atcoder.jp/contests/abc086/tasks/abc086_a

#include <iostream>

using namespace std;

int main() {
    // a, bは整数
    int a, b;
    cin >> a >> b;
    int c = a * b;
    // aとb積であるcが偶数か奇数か判定する
    if (c % 2 == 0)
      cout << "Even" << endl;
    else
      cout << "Odd" << endl;
}