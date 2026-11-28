#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, m;
        cin >> n >> m;

        int rows = ceil((n - 2) / 3.0);
        int cols = ceil((m - 2) / 3.0);

        cout << rows * cols <<endl;
    }
}