#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    long long tc, a, b, c, l, k, r, sum = 0, count = 0;
    cin >> tc;

    for (long long i = 0; i < tc; i++) {
        count = 0;
        sum = 0;

        long long n;
        cin >> n;

        vector<long long> v(n);
        for (long long j = 0; j < n; j++) {
            cin >> v[j];
        }

        if(v[n-1]==0 and n!=1){
            cout << -1 << "\n";
            continue;
        }

        for (long long j=n-2 ; j>=0 ; j--){
            if(v[j] >= v[j+1]){
                while(v[j] >= v[j+1]){
                    v[j] /= 2;
                    count++;
                }
            }
            if(v[j] <= 0 && j!=0){
                count = -1;
                break;
            }
        }

        cout << count << "\n";
    }

    return 0;
}