#include <iostream>
#include <vector>

using namespace std;

int n;
int a[11000];

int main() {
    cin >> n;
    for (int i=0; i<n; ++i)
      cin >> a[i];
    
    vector<int> findIDs;
    for (int i=0; i<n; ++i) {
        if (a[i] == 0) {
            findIDs.push_back(i);
        }
    }

    cout << "nums of zeros" << findIDs.size() << endl;
    for (int i=0; i<(int)findIDs.size(); ++i) {
        cout << findIDs[i] <<  " th" << endl;
    }
}