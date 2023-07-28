#include <iostream>

using namespace std;

int main() {
    int N, A;
    cin >> N >> A;

    int c = N%500;
    if ((A - c) > 0) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }
}