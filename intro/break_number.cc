// https://atcoder.jp/contests/abc068/tasks/abc068_b

#include <iostream>

using namespace std;

int N;

int main() {
    cin >> N;
    int macnt = -1, ans = -1;
    for (int i = 1; i < N + 1; i++) {
        int cnt = 0;
        int y = i;
        while (y%2 == 0) {
            y /= 2;
            cnt++;
        }

        if (macnt < cnt) {
            macnt = cnt;
            ans = i;
        }
    }

    cout << ans << endl;
}