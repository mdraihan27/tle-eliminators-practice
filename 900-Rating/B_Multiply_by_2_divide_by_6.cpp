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

        long long n;
        cin >> n;

        // vector<long long> v(n);
        // for (long long j = 0; j < n; j++) {
        //     cin >> v[j];
        // }

        while(n!=1){
            if(n%6==0){
                n/=6;
            }
            else if(n%3==0){
                n*=2;
            }else{
                cout << -1 << "\n";
                break;
            }
            count++;
        }

        if(n==1){
            cout << count << "\n";
        }

        
    }

    return 0;
}