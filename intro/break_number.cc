// https://atcoder.jp/contests/abc068/tasks/abc068_b

#include <iostream>

using namespace std;

int N;

// 与えられた整数N以下の整数で最も2で割れる回数が多い整数を求める
int main() {
    cin >> N;
    // macnt: 割れた回数の最大値
    // ans: その時点で最も割れる回数が多かった整数
    int macnt = -1, ans = -1;
    for (int i = 1; i < N + 1; i++) {
        int cnt = 0;
        int y = i;
        // 何回2で割れるかカウント
        while (y%2 == 0) {
            y /= 2;
            cnt++;
        }

        // 割れる回数の最大値を更新
        if (macnt < cnt) {
            macnt = cnt;
            ans = i;
        }
    }

    cout << ans << endl;
}