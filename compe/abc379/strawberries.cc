// https://atcoder.jp/contests/abc379/tasks/abc379_b

#include <iostream>
#include <string>

using namespace std;

int N, K;
string S;

int main() {
    cin >> N >> K;
    cin >> S;

    int cnt = 0;
    // K文字のOを並べた文字列を作成
    string t = string(K, 'O');
    // K文字ずつ文字列から文字を取得して確認する
    for (int i=0; i<N-K+1; ++i) {
        if (S.substr(i, K) == t) {
            cnt++;
            // 一度確認した範囲はXに置換する
            for (int j=i; j<i+K; j++) {
                S[j] = 'X';
            }
        }
    }
    cout << cnt << endl;
}