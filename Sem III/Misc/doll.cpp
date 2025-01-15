#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;
    while (T--) {
        int N; 
        cin >> N;
        int arr[N];
        int ans = 0;
        for (int i = 0; i < N; i++) {
            cin >> arr[i];
            ans = ans ^ arr[i];
        }
        cout << ans << endl;
    }
    return 0;
}
