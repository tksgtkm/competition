// https://atcoder.jp/contests/abc102/tasks/abc102_b

#include <iostream>
#include <algorithm>

using namespace std;

int N;
int A[110];

int main() {
    cin >> N;
    for (int i=0; i<N; i++)
      cin >> A[i];

    sort(A, A+N, greater<int>());

    int abs_diff = -1;
    for (int i=1; i<N; ++i) {
        int cnt = 0;
        int diff = A[0] - A[i];

        if (abs_diff < diff) {
            abs_diff = diff;
        }
    }

    cout << abs_diff << endl;
}