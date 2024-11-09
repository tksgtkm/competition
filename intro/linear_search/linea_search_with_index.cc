#include <iostream>
using namespace std;

int n;
int a[11000];

int main() {
    cin >> n;
    for (int i=0; i<n; ++i)
      cin >> a[i];

    int findID = -1;
    for (int i=0; i<n; ++i) {
        if (a[i] == 0) {
            findID = i;
            break;
        }
    }

    if (findID != -1)
      cout << findID << endl;
    else
      cout << "No" << endl;
}