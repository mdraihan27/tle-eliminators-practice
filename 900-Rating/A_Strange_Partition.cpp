#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    long long tc, a, b, c, l, k, r, sum = 0, count = 0;
    string s, t;
    cin >> tc;

    for (long long i = 0; i < tc; i++) {
        count = 0;
        sum = 0;

        long long n,x;
        cin >> n>>x;

        vector<long long> v(n);
        for (long long j = 0; j < n; j++) {
            cin >> a;
            sum+=a;
            count+=(a+x-1)/x;
        }

        cout<<(sum+x-1)/x<<" "<<count<<endl;

        
    }

    return 0;
}