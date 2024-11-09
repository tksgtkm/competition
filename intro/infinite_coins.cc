#include <iostream>

using namespace std;
// N: 支払う金額 A: 1円玉の枚数 500円は無限にあるとする
int main() {
    int N, A;
    cin >> N >> A;

    // 支払う金額を500で割ったあまりが1円玉で支払う金額になる
    // 1円玉で支払う金額が用意した1円玉で支払えるかどうかで判定する
    cout << (N % 500 <= A ? "Yes" : "No") << endl;
}