// https://atcoder.jp/contests/abc113/tasks/abc113_b

#include <iostream>
#include <cmath>

using namespace std;

int N;
int T, A;
int H[1100];

int main() {
    cin >> N;
    cin >> T >> A;
    for (int i=0; i<N; i++)
      cin >> H[i];

    int res = 0;
    int cc = 1<<30;

    for (int i=0; i<N; ++i) {
        int d = (T*1000 - H[i]*6) - A*1000;
        if (d < 0)
          d = -d;
        if (cc > d) {
            cc = d;
            res = i;
        }
    }

    cout << (res + 1) << endl;
}