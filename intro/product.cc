// https://atcoder.jp/contests/abc086/tasks/abc086_a

#include <iostream>

using namespace std;

int main() {
    int a, b;
    cin >> a >> b;
    int c = a * b;
    if (c % 2 == 0)
      cout << "Even" << endl;
    else
      cout << "Odd" << endl;
}