#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    long long tc, a, b, c, l, k, r, sum = 0, count = 0, ones =0, zeros=0;
    string s, t;
    cin >> tc;

    for (long long i = 0; i < tc; i++) {
        count = 0;
        sum = 0;

        long long n;
        cin >> n;

        vector<long long> v(n);
        for (long long j = 0; j < n; j++) {
            cin >> v[j];

            if(v[j]==1) ones++;
            else if(v[j]==0) zeros++;
        }

        sum+=ones;
        sum+=ones*(pow(2,zeros)-1);

        cout<<sum<<endl;

         ones=0;
         zeros=0;

        
    }

    return 0;
}